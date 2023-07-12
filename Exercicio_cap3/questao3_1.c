#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "pilha1.h"





int prio (char o) {
    switch (o)
    {
    case '(': return 0;
    case '+': 
    case '-': return 1;
    case '*': 
    case '/': return 2;
    }
    return -1;
}

char* posfixa(char *e) {
    static char s[256];
    int j = 0;
    Pilha Ju = pilha(256);

    for(int i = 0; e[i]; i++){
        if(e[i] =='('){
            push(e[i], Ju);

        } else if (isdigit(e[i])){
            s[j++] = e[i];


        } else if (strchr("+-/*", e[i])) {

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
int valor (char *e) {

    Pilha P = pilha(256);
    for(int i = 0; e[i]; i++){
        if(isdigit(e[i]))
            push(e[i] - '0', P);

        else {
            int y = pop(P);
            int x = pop(P);
            switch(e[i]){
                case '+': push(x+y, P); break;
                case '-': push(x-y, P); break;
                case '*': push(x*y, P); break;
                case '/': push(x/y, P); break;
            }
        }
    }

    int z = pop(P);

    return z;
}


int main(){

    char inf[256];
    printf("Insira  uma expressao tida como infixa: ");
    scanf("%s", &inf);


    char *pf = posfixa(inf);
    int resultado = valor(pf);

    printf("%s", pf);

    printf("%d", resultado);

    return 0;
}
