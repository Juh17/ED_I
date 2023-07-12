#include<stdio.h>
#include<iostream>

using namespace std;

void quick_sort(int vetor[10], int inicio, int fim);

int main(){
   int vetor[6] = {7, 9, 4, 3, 6, 1};
   int i;

   quick_sort(vetor, 0, 5);
   printf("\n2.Vetor ordenado:\n");

   for(i = 0; i <= 5; i++){
      printf("%d ", vetor[i]);
   }
   printf("\n");
}

void quick_sort(int vetor[10], int inicio, int fim){
   int p, i, j, aux;

   i = inicio;
   j = fim;
   p = vetor[(i+j)/2];

   while(vetor[i] < p){
      i = i + 1;
   }
   while(vetor[j] > p){
      j = j - 1;
   }

   if(i <= j){
      aux = vetor[i];
      vetor[i] = vetor[j];
      vetor[j] = aux;
      i++;
      j--;
   }

   if (j > inicio){
     quick_sort(vetor, inicio, j);
   }
   if (i < fim){
     quick_sort(vetor, i, fim);
   }
}



