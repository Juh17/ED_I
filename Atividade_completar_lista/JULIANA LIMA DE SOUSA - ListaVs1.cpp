#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct aluno{
	int mat;
	string nome;
}Aluno;

Aluno lista[30];
int contador = -1;

//retorna a posicao do elemento procurado
int procura(int mat){
	for(int i = 0; i <= contador; i++) {
		if (lista[i].mat == mat) {
			return i;
		}
	}
	return -1;
}


void incluirDesordenado(Aluno student){
  if (procura(student.mat) == -1) {
		contador++;
		lista[contador] = student;
	} else {
		cout << "O aluno já possui matrícula!" << endl;
	}
}

//recebe a posicao e imprime o elemento na tela
void mostrar(int pos){
	cout << ">> Aluno << " << endl;
	cout << "\Nome: " << lista[pos].nome << endl;
	cout << "\Matrícula: " << lista[pos].mat << endl;
}

//procura o elemento e depois mostra o elemento encontrado (se nao for encontrado informa q ele nao existe)
void consultar(int mat){
   int posStudent = procura(mat);

   if(posStudent != -1) mostrar(posStudent);
   else cout << "O aluno nao possui matrícula!" << endl;
}

//estratégia 1: colocar o ultimo elemento da lista na posição do elemento removido
void remover00(int mat){
    int pos = procura(mat);

	lista[pos] = lista[contador];
	free(&lista[contador]);
	contador--;

}

//estratégia 2: mover TODOS os elementos que estão APÓS  o elemento que deve ser removido UMA POSIÇÃO A FRENTE.
void remover01(int mat){
    int pos = procura(mat);

	if (pos != -1) {
		for(int i = pos; i <= contador; i++) {
			lista[i] = lista[i+1];
		}
		free(&lista[contador]);
		contador--;
	}
}

main(){
     Aluno student1;
     student1.mat = 1;
     student1.nome = "Juliana";

     Aluno student2;
     student2.mat = 2;
     student2.nome = "Junior";

     Aluno student3;
     student3.mat = 3;
     student3.nome = "Mariana";


     incluirDesordenado(student1);
     incluirDesordenado(student2);
     incluirDesordenado(student3);

     mostrar(0);
     mostrar(1);
     mostrar(2);
}

