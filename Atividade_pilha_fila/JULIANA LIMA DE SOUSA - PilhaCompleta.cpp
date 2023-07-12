#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class No{
	public:
		char nome;
		No *prox;
		No(char n){
			nome = n;
			prox = NULL;
		}
};

class Pilha{
	public:
		No *topo;

		Pilha(){
			topo = NULL;
		}

		void push(char n){
		   No *element = new No(n);
		   element->prox = topo;

		   topo = element;
		}

		char pop(){
			char cont = topo->nome;
			No *elementpop = topo;
			topo = elementpop->prox;
			free(elementpop);

			return cont;
		}

		int isEmpty(){
			return (topo == NULL);
		}

		void destroiPilha(Pilha *p){
		    while(!(p->isEmpty())){
		        p->pop();
		    }
		    free(p);
		    free(topo);
		    cout<<"Pilha destruída";
        }
};

int main(){
	Pilha pilha;
	pilha.push('r');
	pilha.push('o');
	pilha.push('m');
	pilha.push('a');
	cout<<pilha.pop()<<endl;
	cout<<pilha.pop()<<endl;
	cout<<pilha.pop()<<endl;
	cout<<pilha.pop()<<endl;
}
