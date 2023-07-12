#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;


typedef int Item;

typedef struct no {
    Item item;
    struct no *prox;
} *Lista;

Lista no(Item x, Lista p){
    Lista n = (Lista)malloc(sizeof(struct no));
    n->item = x;
    n->prox = p;
    return n;
}

void exibe(Lista L){

    while(L != NULL){

        if(L->prox != NULL) cout << L->item << ",";
        else cout << L->item;
        L = L->prox;

    }
}

void anexa(Lista *A, Lista B) {
    if(B == NULL) return;
    while(*A != NULL) A = &(*A)->prox;
    *A = B;
}

void destroi(Lista *L){
    while(*L != NULL){
        Lista n = *L;
        *L = n->prox;
        free(n);
    }
}

int tam(Lista L){
    if(L == NULL) return 0;
    return 1 + tam(L->prox);
}

int pert(Item x, Lista L){
    if(L == NULL) return 0;
    if(x == L->item) return 1;
    return pert(x, L->prox);
}

Lista clone(Lista L) {
    if(L == NULL) return NULL;
    return no(L->item, clone(L->prox));
}

void exibe_inv(Lista L){
    if(L == NULL) return;
    exibe_inv(L->prox);
    cout << L->item << " ";
}

void ins(Item x, Lista *L){
	while(*L != NULL && (*L)->item < x ) L = &(*L)->prox;
	*L = no(x, *L);
}

int em(Item x, Lista L){
    while(L != NULL && L->item < x) L = L->prox;
    return (L != NULL && L->item == x);
}

void insSR(Item x, Lista *L){
    if(!em(x, *L)){
        while(*L != NULL && (*L)->item < x ) L = &(*L)->prox;
	    *L = no(x, *L);
    } else {
        cout << "Item ja existente na lista!" << endl;
    }
}
