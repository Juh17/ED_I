#include <stdio.h>
#include <ctype.h>
#include <string.h>
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
        } else if (isalpha(e[i])){
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


int main(){
    char inf[256];
    printf("Insira uma expressão tida como infixa: ");
    scanf("%s", &inf);


    char *pf = posfixa(inf);
    printf("%s", pf);

    return 0;
}
