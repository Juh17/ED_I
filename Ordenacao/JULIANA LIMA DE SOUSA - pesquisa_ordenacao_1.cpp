#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#define troca(a, b){Aluno x = a; a = b; b = x;}


using namespace std;

typedef struct aluno {
	int matricula;
	string nome;
}Aluno;


void insere(Aluno s, Aluno v[], int tam){
	while (tam > 0 && s.matricula < v[tam - 1].matricula){
		v[tam] = v[tam - 1];
		tam--;
	}
	v[tam] = s;
}

void ord_insercao(Aluno v[], int tam, int i){
	if (i == tam) return;
	insere(v[i], v, i);
	ord_insercao(v, tam, i + 1);
}

int seleciona(Aluno v[], int tam){
	int i = 0;
	for (int j = 1; j < tam; j++){
		if (v[i].nome < v[j].nome){
			i = j;
		}
	}
	return i;
}

void selection_sort(Aluno v[], int tam){
	int pos = seleciona(v, tam);
	if (tam - pos <= 1)
		return;
	troca(v[pos], v[tam - 1]);
	selection_sort(v, tam - 1);
}


int empurra(Aluno v[], int n){
	int t = 0;
	for (int i = 0; i < n; i++)
	{
		if (v[i].matricula > v[i + 1].matricula)
		{
			troca(v[i], v[i + 1]);
			t = 1;
		}
	}
	return t;
}

void bubble_sort(Aluno v[], int n){
	if (empurra(v, n - 1)){
		bubble_sort(v, n - 1);
	}
	return;
}

Aluno myarray[20];

int main()
{

	Aluno aluno1;
	aluno1.matricula = 17;
	aluno1.nome = "Juliana";

	Aluno aluno2;
	aluno2.matricula = 30;
	aluno2.nome = "Mariana";

	Aluno aluno3;
	aluno3.matricula = 22;
	aluno3.nome = "Junior";

	Aluno aluno4;
	aluno4.matricula = 9;
	aluno4.nome = "Charles";

	myarray[0] = aluno1;
	myarray[1] = aluno2;
	myarray[2] = aluno3;
	myarray[3] = aluno4;

	ord_insercao(myarray, 4, 0);

	for (int i = 0; i < 4; i++){
		cout << "matricula " << i << ": " << myarray[i].matricula << endl;
	}
    cout<<" "<<endl;

	selection_sort(myarray, 4);

	for (int i = 0; i < 4; i++){
		cout << "nome " << i << ": " << myarray[i].nome << endl;
	}
    cout<<" "<<endl;

	bubble_sort(myarray, 4);

	for (int i = 0; i < 4; i++){
		cout << "matricula " << i << ": " << myarray[i].matricula << endl;
	}
    cout<<" "<<endl;

	return 0;
}
	 //1:  A. leia os valores e adicione no vetor de dados
	 // ordene pelo campo matricula
	 	//   B. Ordene por:
		//   c. Insercao
	// mostre o resultado ordenado

	// 2: A. leia os valores e adicione no vetor de dados
	// ordene pelo campo nome
		//  B. Ordene por:
	//  c. selection_sort
	// mostre o resultado ordenado

	// 3: A. leia os valores e adicione no vetor de dados
	// ordene pelo campo matricula
	//  B. Ordene por:
	//  c. bubble_sort
	// mostre o resultado ordenado




void ord_insercao(Aluno v[],int tam){
	}

