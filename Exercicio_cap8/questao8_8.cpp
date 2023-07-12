/* Juliana Lima e Pedro Felipe*/

#include <stdio.h>
#include <iostream>

#define troca(a, b) {int x = a; a = b; b = x; }

using namespace std;

int particiona(int v[], int p, int u) {
    int x = v[p];
    p--;
    u++;
    while(p < u){
        do u--; while(v[u] > x);
        do p++; while(v[p] < x);
        if (p < u) troca(v[p], v[u]);
    }
    return u;
}

void quick_sort(int v[], int p, int u){
    if(p >= u) return;
    int m = particiona(v, p, u);
    quick_sort(v, p, m);
    quick_sort(v, m+1, u);
}

void quick_sort(int v[20], int p, int u);

int main(){
   printf("Letra a:\n");
   int v[7] = {72,69,51,46,33,28,15};
   int i;
   quick_sort(v, 0, 6);
   printf("\nVetor Ordenado:\n");
   for(i = 0; i <= 6; i++){
      printf("%d ", v[i]);
   }
   printf("\n");

   printf("\nLetra b:\n");
   int v2[7] = {46,28,51,33,72,15,69};
   int j;
   quick_sort(v2, 0, 6);
   printf("\nVetor Ordenado:\n");
   for(j = 0; j <= 6; j++){
      printf("%d ", v2[j]);
   }
   printf("\n");

}
