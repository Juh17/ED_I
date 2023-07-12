#include <stdio.h>
#include <stdlib.h>

/* Leia um valor em m, calcule e escreva o equivalente em cm.*/

main(){

   int m, cm;

   printf("Insira uma valor em metros(m): ");
   scanf("%d", &m);

   cm = m * 100;

   printf("O valor inseridos em metros(m) equivale a %d centimetros(cm)\n", cm);
   system("Pause");

}
