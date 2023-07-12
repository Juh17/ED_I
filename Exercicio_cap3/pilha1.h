#include <stdio.h>
#include <stdlib.h>

typedef char Itemp;


typedef struct pilha{
	int max;
	int topo;
	Itemp *item;

} *Pilha;

Pilha pilha(int m){
	Pilha p = (Pilha)malloc(sizeof(Pilha));
	p->max=m;
	p->topo=-1;
	p->item=(Itemp*)malloc(m*sizeof(Itemp));
	return p;
}

int pilhaCheia(Pilha p){
	if (p->topo==p->max-1) return 1;
	else return 0;

}



int pilhaVazia(Pilha p){
	return (p->topo == (p->max-1));

}


void push(Itemp n,Pilha p){
	if (!pilhaCheia(p)){
		p->topo++;
	    p->item[p->topo]=n;
	    }

  }

char pop(Pilha p){
	if (!pilhaVazia(p)){
	Itemp v = p->item[p->topo];
	    p->topo-=1;
	    return v;
	}

}

void destroi(Pilha *Q){
	free((*Q)->item);
	free(*Q);
	*Q = NULL;

}

char getTopo(Pilha p){
	return p->item[p->topo];
}

