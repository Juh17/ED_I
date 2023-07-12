#include <stdio.h>
#include <stdlib.h>
#define fmt "%d"

typedef int Item;

typedef struct no{
  Item j;
  struct no *prox;

}*Lista;

Lista no(Item x, Lista L){
   Lista n = (Lista)malloc(sizeof(struct no));
   n-> j = x;
   n->prox = L;

   return n;
}

int ocorrencias(Item x, Lista L){
  int contador = 0;
  if(L == NULL){
    return 0;
  }

  while (L != NULL){
    if(x == L -> j){
      contador++;
    }
    L = L->prox;
  }

  return contador;
}

int main(){

   Lista lista = no(1, no(2, no(1, no(4, no(1, NULL)))));
   printf("%d\n", ocorrencias(1, lista));
   printf("%d\n", ocorrencias(2, lista));
   printf("%d\n", ocorrencias(3, lista));
   printf("%d\n", ocorrencias(4, lista));
}
