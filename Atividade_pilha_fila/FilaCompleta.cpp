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

class Fila{
	public:
		No *inicio;
		No *fim;

		Fila(){
			inicio = NULL;
			fim = NULL;
		}

		void append(char n){
			No *j = new No(n);

			if (isEmpty()){
			  inicio = j;

			}else{
			  fim->prox = j;
			}

			fim = j;
		}

		char pop(){
			char cont = inicio->nome;
			No* inter = inicio;
			inicio = inicio->prox;

			free(inter);

			if(inicio == fim){
			  fim = NULL;
			}

			return cont;
		}

		bool isEmpty(){
			return (inicio == NULL);
		}

	    void popAll(){
	    	while(!isEmpty()){
	    	  pop();
	    	}
	    	free(fim);
	    	free(inicio);
        }

};

int main(){
   Fila *f = new Fila();

   f->append('r');
   f->append('o');
   f->append('m');
   f->append('a');

   cout<<f->fim<<endl;
   cout<<f->inicio<<endl;

    while(!(f->isEmpty())){
        cout <<f->pop();
    }

    cout<<f->fim <<endl;
    cout<<f->inicio << endl;

}
