#include <stdio.h>
#include <stdlib.h>

/* Leia o valor do raio de uma circunferência, calcule e escreva seu comprimento.(c = 2 *  *r)*/

main(){

   float r, c;
   const float pi = 3.14;
   printf("Insira o valor do Raio(r): ");
   scanf("%f", &r);

   c = (2 * pi * r);

   printf("Comprimento do Raio(r): %.1f\n", c);
   system("Pause");

}
