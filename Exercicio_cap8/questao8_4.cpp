/*Juliana Lima e Pedro Felipe */


#include <iostream>
#include <string.h>
#define troca(a, b){int x = a; a= b; b = x;}

using namespace std;

int seleciona(int v[], int n){

    int i = 0;
    for(int j = 1; j<n; j++){
        if (v[i] < v[j]) i = j;
    }
    return i;
}

void SelectionSort(int v[], int n){
   while (n > 1){
      troca (v[seleciona(v, n)], v[n-1]);
      n--;
      SelectionSort(v, n);
    }
}


int main(){
    int v[] = {10, 4, -3, 80, -5, 0};
    SelectionSort(v, 6);

    for (int i = 0; i < 6; i++) {
        cout << v[i] << endl;
    }
}
