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
}

void substitui(Item a , Item b , Lista L) {
    while(L != NULL) {
        if(L->j == a) {
            L->j = b;
        }
        L = L->prox;

    }
    printf("\n");
}

int main() {
    Lista lista = no(1, no(2, no(1, no(2, NULL))));

    exibe(lista);
    substitui(2, 3, lista);
    exibe(lista);
    printf("\n");
}
