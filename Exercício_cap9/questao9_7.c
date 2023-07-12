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

int tam(Lista L) {
    if(L == NULL){
      return 0;
    }else{
     return 1 + tam(L->prox);
    }
}

int igual(Lista A, Lista B){
    int contador = 0;
    int tamanhoA = tam(A);

    if(tam(A) != tam(B)){
      return 0;
    }
     while(A != NULL && B != NULL) {
        if(A->j == B->j) {
           contador++;
        }
        A = A->prox;
        B = B->prox;
        }

    if(contador == tamanhoA){
       return 1;
    } else{
      return 0;
    }

}

int main() {
    Lista I = no(1, no(2, no(3, no(4, NULL))));
    Lista J = no(1, no(2, no(3, no(4, NULL))));
    Lista K = no(2, no(3, no(2, no(4, NULL))));

    printf("(I, J) = "fmt"\n", igual(I, J));
    printf("(I, K) = "fmt"\n", igual(I, K));
}
