
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct arv {
	struct arv *dir;
	int info;
        struct arv *esq;
} *Arv;

Arv arv(Arv e, int info, Arv d){
	Arv novo = (Arv)malloc(sizeof(Arv));
	novo->esq = e;
	novo->info = info;
	novo->dir = d;
	return novo;
}

Arv criarVazia() {
	return NULL;
}


int arv_vazia(Arv j) {
	if(j == NULL) return 1;
	return 0;
}

void arv_imprime(Arv j) {
	if(!arv_vazia(j)) {
		cout << "<" << j->info;
		printf("<%i", j->info);
		arv_imprime(j->dir);
		arv_imprime(j->esq);
	} else {
		printf(">");
	}
}

/*void imprime(Arv *n){
    if( raiz == NULL){
       cout<<"\n <VAZIO>";
    }
    else{
       if(n != NULL){
       cout<<"<"<< n-> info;
       imprime(n->esq);
       imprime(n->dir);
       cout<<">";
       }
       else
         cout<<"<>";
    }
}

void emnivel(Arv A){
   if (A == NULL) return;
   Fila F = fila(MAX);
   enfileira(A, F);
   while(!vaziaf(F)){
      Arv A = desenfileira(F);
      printf(fmt, A-> item);
      if(A->esq != NULL) enfileira(A->esq, F);
      if(A->esq != NULL) enfileira(A->esq, F);


   }
}*/

int main(){

	Arv R = arv(arv(arv(criarVazia(), 4, criarVazia()), 2, arv(criarVazia(), 5, criarVazia())),1,arv(criarVazia(),3,arv(criarVazia(),6,criarVazia())));
	arv_imprime(R);
	return 0;
}
