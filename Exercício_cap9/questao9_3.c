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

Item ultimo(Lista L){
   if(L->prox == NULL) {
      return L->j;

   }else{
      return ultimo(L->prox);
   }
}

int main(){

   Lista lista = no(1, no(2, no(3, NULL)));
   printf(fmt"\n", ultimo(lista));

}
