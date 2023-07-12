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
		No *ant;
		No(int m,char n[23]){
			mat=m;
			strcpy(nome,n);
			prox=NULL;
			ant=NULL;
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
		    No *novo = new No(m, n);

		    if(fim == NULL){
		       fim = novo;
		       inicio = novo;
		    }else{
		       fim->prox = novo;
		       novo->ant = fim;
		       fim = novo;
		    }
		}

		void addToIni(int m, char n[23]){
		   No *novo = new No(m, n);

		   if(inicio == NULL){
		       fim =novo;
		       inicio = novo;
		   }else{
		       inicio->ant = novo;
		       novo->prox = inicio;
		       inicio = novo;
		   }
		}

		void addOrd(int m, char n[23]){
		   No* novo = new No(m, n);

		   if(inicio == NULL){
		       inicio = novo;
		       fim = novo;
		   }else if(inicio == fim){
		       if(m > inicio->mat){
		          addToFinal(m, n);
		       }else{
		          addToIni(m, n);
		       }
		       free(novo);
		   }else{
		       No* atual = inicio;
		       while(atual->mat < m && atual->prox != NULL){
		          atual = atual->prox;
		       }

		       novo->prox = atual;
		       novo->ant = atual->ant;
		       atual->ant->prox = novo;
		       atual->ant = novo;

		       atual = novo;
		   }
		   return;
        }

		//mostra todos os elementos do inicio ao final da lista
		void mostraIniFim(){
		   No* j = inicio;

		   cout<<"\n------Alunos------"<<endl;
		   cout<<" "<<endl;

		   if(j == NULL && fim == NULL){
		      cout<<"A lista está vazia!"<<endl;
		   }
		   while(j != NULL){
		      cout<<"Nome: "<<j->nome <<endl;
		      cout<<"Matrícula: "<<j->mat<<endl;

		      j = j->prox;
		   }
		   free(j);

		}

		// mostra todos os elementos do final ao inicio da lista
		void mostraFimIni(){
		   No* j = fim;
		   cout<<"\n------Alunos------"<<endl;

		   if(j == NULL && fim == NULL){
		       cout<<"A lista está vazia!"<<endl;
		   }

		   while(j != NULL){

		       cout<<"Nome: "<<j->nome<<endl;
		       cout<<"Matrícula: "<<j->mat<<endl;

		       j = j->ant;
		   }
		   free(j);
		}

	     int removerFinal(){
                /* No* j = fim;
                fim = fim->ant;
                free(j);
                return j->mat;*/
                No *removerJ;
                removerJ = fim;

                if(inicio == NULL && fim == NULL){
                     return 0;
                }else if(fim->prox == NULL && fim->ant == NULL){
                     fim = NULL;
                     inicio = NULL;
                     free(removerJ);
                }else{
                     fim = fim->ant;
                     fim->prox = NULL;

                     removerJ->ant = NULL;
                     free(removerJ);
                }
                    return 1;
	      }

	      int removerInicio(){
		  /* No* j = inicio;
		   inicio = inicio->prox;
		   free(j);
		   return j->mat;*/
		   No *removerJ;
                   removerJ = inicio;

                   if(inicio == NULL && fim == NULL){
                         return 0;
                   }else if(fim->prox == NULL && fim->ant == NULL){
                         fim = NULL;
                         inicio = NULL;
                         free(removerJ);
                  }else{
                         inicio = inicio->prox;
                         inicio->ant = NULL;

                         removerJ->prox = NULL;
                         free(removerJ);
                   }
                      return 1;
		 }

		int remover(int m){
		   if(m == inicio->mat){
		      removerInicio();
		   }else if(m == fim->mat){
		      removerFinal();
		   }else{
		      No* atual = inicio->prox;

		      while(atual->mat != m){
		         if(atual->mat > m || atual == NULL){
		            return 0;
		         }else{
		            atual = atual->prox;
		         }

		      }
		      atual->ant->prox = atual->prox;
                      atual->prox->ant = atual->ant;
                      free(atual);
		   }
		     return 1;
		}
};
main(){
   Lista *l = new Lista();

   char aluno1[] = "Joana Oliveira";
   char aluno10[] = "Cristiano Oliveira" ;
   char aluno8[] = "Joao" ;
   char aluno4[] = "Fabio" ;



   l->addOrd(1, aluno1);
   l->addOrd(10, aluno10);
  // l->mostra();
   l->addOrd(8, aluno8);
   l->addOrd(4, aluno4);
   l->mostraIniFim();
  // l->mostraFimIni();
   if (l->remover(4)==1){
      cout<<"\nElemento removido!!";
      cout<<" "<<endl;
   }else{
      cout<<"\nElemento nao encontrado!!";
   }
   l->mostraIniFim();

}
