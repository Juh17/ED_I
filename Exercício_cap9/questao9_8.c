#include <stdio.h>
#include <stdlib.h>
#define fmt "%d"

typedef int Item;
typedef struct no {
    Item j;
    struct no *prox;
} *Lista;


Lista no(Item x, Lista L) {
    Lista n = (Lista)malloc(sizeof(struct no));
    n->j = x;
    n->prox = L;
    return n;
}

void exibe(Lista L) {
    while(L != NULL) {
        printf(fmt, L->j);
        L = L->prox;
    }
    printf("\n");
}


int enesimo(int posicao, Lista L) {
    if(posicao < 1 || L->prox == NULL){
       return -1;
    }else if(posicao == 1){
       return L->j;
    }else{
       return enesimo(posicao-1, L->prox);
    }
}


int main() {
    Lista lista = no(1, no(7, no(1, no(2, no(5, NULL)))));

    exibe(lista);
    printf(fmt, enesimo(2, lista));
    printf("\n");

}
