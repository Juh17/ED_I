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
        cout << "Pertence ao conjunto de números" << endl;
    } else {
        cout << "Não pertencente ao conjunto de números" << endl;
    }

     if (pesquisa_binaria(5, v, p, 0)){
        cout << "Pertence ao conjunto de números" << endl;
    }else{
        cout << "Não pertence ao conjunto de números"<<endl;
    }

    return 0;
}


   // A. Leia os valores através do teclado
   // B. Armazene os valores no vetor de dados
   // C. leia o valor que deseja procurar

   // D. Aplique a pesquisa linear
   // E. Apresente o resultado
   // F. Aplique a pesquisa binária
   // G. Apresente o resultado






