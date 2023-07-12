#include <stdio.h>
#include <stdlib.h>

/* Leia um valor em kg (quilograma), calcule e escreva o equivalente em g(grama).*/

main(){

   int kg, g;

   printf("Insira um valor em Quilogramas(Kg): ");
   scanf("%d", &kg);

   g = kg * 1000;

   printf("O valor inserido em Quilogramas(Kg) equivale a %d gramas(g)\n", g);
   system("Pause");
}
