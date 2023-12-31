#include <stdio.h>
#include <stdlib.h>

typedef int Itemp;

typedef struct fila{
	int max;
	int fim;
    int inicio;
	Itemp *item;
} *Fila;


Fila fila(int m){
	Fila p = (Fila)malloc(sizeof(Fila));
	p->max=m;
	p->fim=-1;
    p->inicio=-1;
	p->item=(Itemp*)malloc(m*sizeof(Itemp));
	return p;
}


bool filaVazia(Fila p){
	return (p->fim == p->inicio && p->inicio == -1);
}


bool filaCheia(Fila p){
	return (p->fim == (p->max-1));
}


void enfileira(Itemp n, Fila p){
	if(filaCheia(p)){
		printf("Fila cheia");
	} else if (filaVazia(p)){
		p->fim += 1;
        p->inicio +=1;
		p->item[p->fim] = n;
    } else {
        p->fim += 1;
		p->item[p->fim] = n;
    }
}


Itemp desenfileira(Fila p){
	if(filaVazia(p)){
		printf("Fila vazia");
	} else if (p->fim == p->inicio){
        Itemp x = p->item[p->inicio];
		p->inicio= -1;
        p->fim = -1;
		return x;
    } else {
		Itemp x = p->item[p->inicio];
		p->inicio+=1;
		return x;
	}
}

Itemp getTopo(Fila p){
	if(filaVazia(p)){
		printf("Pilha vazia");
	}
	return p->item[p->fim];
}
