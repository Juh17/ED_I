#include <stdio.h>
#include <stdlib.h>

/*Leia um valor em km, calcule e escreva o equivalente em m.*/

main(){

   int km, m;

   printf("Insira um valor em Quilometros(km): ");
   scanf("%d", &km);

   m = km * 1000;

   printf("O valor inserido em Quilometros(Km), corresponde a %d metros.\n", m);
   system("Pause");
}
