/*Juliana Lima e Pedro Felipe */

#include <iostream>
#include <string.h>

#define troca(a, b){int x = a; a= b; b = x;}

using namespace std;

int empurra(int v[], int n){

   int houveTroca = 0;

  for(int i=0; i<n; i++){
     if(v[i] > v[i+1]){
        troca(v[i], v[i+1]);
        houveTroca = 1;
     }
  } return houveTroca;
}

 void bubble_sort(int v[], int n){
    if (empurra(v, n - 1)){
       bubble_sort(v, n-1);
    }
    return;
 }

int main(){
   int v[] = {46, 38, 50, 27, 19};
   troca(v[1], v[2]);
   int num = (sizeof(v))/sizeof(int);

   bubble_sort(v, num);

   for(int i = 0; i < num; i++){
      cout <<v[i]<<endl;
   }

   return 0;
}
