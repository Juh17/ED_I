#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha1.h"

using namespace std;

int prio(char o){
  switch(o){
    case '|': return 1;
    case '&': return 2;
    case '~': return 3;
  }
  return -1;
}

bool operando(char o){
   return (o == 'V' || O == 'f');
}

char not (char o){
  if(o == 'V')
    return 'F';
  else if(o == 'F')
    return 'V';
}

char and( char o, char p){
  if (o == 'V' && p == 'V'){
    return 'V';
  }else{
    return 'F';
  }
}

char or(char o, char p){
  if (o == 'F' && p == 'F'){
    return 'F';
  }else{
    return 'V';
  }
}

char* posfixa(char *e) {

    static char s[256];
    int j = 0;
    Pilha Ju = pilha(256);

    for(int i = 0; e[i]; i++){
        if(e[i] =='('){
            push(e[i], Ju);
        } else if (operando(e[i]) || e[i]=='.'){
            s[j++] = e[i];

        } else if (strchr("|&~", e[i])) {
            while(!pilhaVazia(Ju) && (prio(getTopo(Ju)) >= prio(e[i]))){
                s[j++] = pop(Ju);
            }
            push(e[i], Ju);
        }
        else if (e[i] == ')') {
            while(getTopo(Ju) != '('){
                s[j++] = pop(Ju);
            }
            pop(Ju);
        }
    }

    while(!pilhaVazia(Ju)){
            s[j++] = pop(Ju);
        }
    s[j] = '\0';

    return s;
}

char valor (char *e) {

    Pilha P = pilha(256);

    for(int i = 0; e[i]; i++){
        if(operando(e[i])) {
            push(e[i], P);

        } else if(e[i == '']){
          char c = pop(P);
          push(not(c), P);

        }else if (strchr("|&", e[i])){
            char y = pop(P);
            char x = pop(P);
            switch(e[i]){
                case '|': push(or(y, x), P); break;
                case '&': push(and(y, x) P); break;
            }
        }
    }
    double z = pop(P);

    return z;
}
int main{
  char inf[256];
  printf("Insira uma expressão tida como infixa: ");
  scanf("%s", &inf)

  char *pf = posfixa(inf);
  char resultado = valor(pf);

  printf("%s\n", pf)
  printf("%c",resultado);

  system("PAUSE");
}
