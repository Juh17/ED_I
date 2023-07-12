/*Juliana Lima e Pedro Felipe */

#include <iostream>
#include <string.h>

using namespace std;

void insere(int x, int v[], int n){
    while (n > 0 && x < v[n-1]){
       v[n] = v[n-1];
       n--;
    }
    v[n] = x;
}

void InsertionSort(int v[], int n){
    if (n == 1) return;
    n--;
    InsertionSort(v, n);
    insere(v[n], v, n);
}

int main(){

   int v[] = {10, 4, -3, -5, 0};
   InsertionSort(v, 5);

   for(int i = 0; i<5; i++){
     cout<<v[i]<<endl;
   }
}
