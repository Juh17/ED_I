#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class No{
	public:
		int mat;
		char nome[23];
		No *prox;
		No(int m,char n[23]){
			mat=m;
			strcpy(nome,n);
			prox=NULL;
		}
};

class Lista{
	public:
		No *inicio;
		No *fim;

	    Lista(){
	    	inicio = NULL;
	    	fim = NULL;
		}
		void addToFinal(int m, char n[23]){
			No *novo = new No(m,n);
			if (fim == NULL){
				inicio = novo;
				fim = novo;
			}
			else{
				fim->prox = novo;
				fim = novo;
			}
		}


		int lst_vazia(){
			return (inicio==NULL);
		}


		void addToInicio(int m,char n[23]){
		    No *novo = new No(m, n);
			novo -> prox = inicio;
			inicio = novo;
		}


		void listar(){
			if (lst_vazia()){
				cout<<"\nLista vazia!!!";
			}
			else{
				No *j = inicio;

				cout << ">> Alunos << "<< endl;

				while(j != NULL) {
					cout << "Nome: " << j->nome << endl;
					cout << "Matrícula: " << j->mat << endl;
					cout << endl;
					j = j->prox;
				}
			}
		}
	        
	        No *consultar(int mat){
                    No* j = inicio;

			if(mat != inicio->mat) {
				while (j->prox != NULL && j->prox->mat != mat) {
					j = j->prox;
				}

				if(j->prox->mat != mat) {
					cout << "Matrícula nao encontrada!"<< endl;
				} else {
					cout << "Nome: " << j->prox->nome <<endl;
					cout <<"Matricula: " << j->prox->mat << endl;
				}
			}
			return j;
		}



		int remover(int mat){
		    if(!lst_vazia()) {
				No *novo = inicio;
				No *anterior = NULL;

				while(novo != NULL) {
					if(novo->mat == mat) {
						if(fim == novo) {
							fim = anterior;
						}
						anterior->prox = novo->prox;
						free(novo);
						novo = novo->prox;
					}
					anterior = novo;
					novo = novo->prox;
				}
			 }
			 else {
				cout << "Lista Vazia" << endl;
			 }

		}

		void removeTodos(){
			No *atual=inicio;
			No *proximo=NULL;
			while (atual!=NULL){
					proximo=atual->prox;
					cout<<"\n Apaga:"<<atual->nome;
					free(atual);
					atual=proximo;
			}
			inicio=atual;
		}
	

		// criar uma nova lista que seja o inverso da primeira
	         Lista* criaListaInversa(){
		    Lista* listaCriada = new Lista;
		    No* novo = inicio;

		    while(novo != NULL){
		      listaCriada->addToInicio(novo->mat, novo->nome);
		      novo = novo->prox;
		    }
		    return listaCriada;
		}



		//inverter a propria lista
		/*void listainvertida(){
		   if(!lst_vazia()) {
					No *novo = inicio;
					No *prox = novo->prox;
					No *anterior = NULL;

					novo->prox = NULL;
					fim = inicio;

					while(prox != NULL) {
						anterior = novo;
						novo = prox;
						prox = novo->prox;

						novo->prox = anterior;

						if(prox == NULL) {
							inicio = novo;
						}
					}

				}
		}*/
	
	        void listainvertida() {
			No* novo = inicio;
			No* atual = novo->prox;

			while (atual != NULL){
				addToInicio(atual->mat, atual->nome);
				atual = atual->prox;
			}

			atual = novo->prox;
			fim = novo;
			novo->prox = NULL;

			while (atual != NULL) {
				novo = atual;
				atual = atual->prox;
				free(novo);
			}
		}

};

main(){
   Lista* l = new Lista();

   char aluno1[] = "Joao" ;
   char aluno2[] = "Gabriela" ;
   char aluno3[] = "Fabiola" ;
   char aluno5[] = "Joana Oliveira" ;
   char aluno6[] = "Cristiano Oliveira" ;

   l->addToFinal(1, aluno1);
   l->addToFinal(2, aluno2);
   l->addToFinal(3, aluno3);
   l->addToInicio(5, aluno5);
   l->addToInicio(6, aluno6);
   l->listar();

  l->listainvertida();
  l->listar();

  Lista* l2 = l->criaListaInversa();
  l2->listar();


}
