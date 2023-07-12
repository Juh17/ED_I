#include <stdio.h>
#include <ctype.h>
#include "stack1.h"
#include "fila.h"

int main(){

    char s[256];
    Fila F = fila(256);
    Pilha P = pilha(256);

    printf("\nFrase? ");
    gets(s);
    for(int i = 0; s[i]; i++){
        if(isalpha(s[i])){
            enfileira(s[i], F);
            empilha(s[i], P);
        }
    }

    while(!filaVazia(F) && toupper(desenfileira(F))==toupper(desempilha(P)));
    if(filaVazia(F)){
       printf("Palindroma");
    }else{
       printf("Nao eh palindroma");
    }

    return 0;





}
