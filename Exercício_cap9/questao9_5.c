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

int soma(Lista L){
    if(L->prox == NULL){
      return L->j;
    } else{
      return L->j + soma(L->prox);
    }
}

int main() {
    Lista lista = no(3, no(1, no(5, no(4, NULL))));

    printf(fmt"\n", soma(lista));
}
