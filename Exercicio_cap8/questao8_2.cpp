
/*Juliana Lima e Pedro Felipe */

#include <iostream>
#include <string.h>

using namespace std;

void insere(char x, char v[], int n){

    while(n > 0 && x < v[n-1]){
        v[n] = v[n-1];
        n--;
    }
    v[n] = x;
}

void insertion_sort(char v[], int n){

   for(int i = 0; i < n; i++){
      insere(v[i], v, i);
   }
}
int main(){

   char v[] = {'e','c','a','d','b'};
   int itens = sizeof(v)/sizeof(char);

   insertion_sort(v, itens);
   for(int i = 0; i < itens; i++ ){
       cout<< v[i] <<endl;
   }
   return 0;

}
