#include<stdio.h>
#include<iostream>
#include <string.h>

using namespace std;


bool pesquisa_linear(int x,int v[], int p){
   if(x == v[p - 1]){
        return true;
    }
    p--;

    if(p-1 == 0){
        return false;
    }

    return pesquisa_linear(x, v, --p);
}


bool pesquisa_binaria(int x,int v[], int p, int u){
    int pm = (u + p) / 2;

    if (x == v[pm]){
        return true;
    }

    if (x < v[pm]){
        p = pm - 1;
    }else{
        u = pm + 1;
    }

    if (p < u){
        return false;
    }

    return pesquisa_binaria(x, v, p, u);
}


int main(){
    int p = 4;
    int v[p];
    for(int i = 0; i< p; i++){
       cin>>v[i];
    }

    if(pesquisa_linear(-3, v, p)){
        cout << "Pertence ao conjunto de n�meros" << endl;
    } else {
        cout << "N�o pertencente ao conjunto de n�meros" << endl;
    }

     if (pesquisa_binaria(5, v, p, 0)){
        cout << "Pertence ao conjunto de n�meros" << endl;
    }else{
        cout << "N�o pertence ao conjunto de n�meros"<<endl;
    }

    return 0;
}


   // A. Leia os valores atrav�s do teclado
   // B. Armazene os valores no vetor de dados
   // C. leia o valor que deseja procurar

   // D. Aplique a pesquisa linear
   // E. Apresente o resultado
   // F. Aplique a pesquisa bin�ria
   // G. Apresente o resultado






