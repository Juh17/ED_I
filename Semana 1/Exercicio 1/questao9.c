#include <stdio.h>
#include <stdlib.h>

/* Leia o valor da base e altura de um triângulo, calcule e escreva sua área. (área=(base * altura)/2)*/

main(){

   float base, altura, area;
   printf("Informe a base do triangulo:  ");
   scanf("%f", &base);

   printf("Informe a altura do tringulo: ");
   scanf("%f",&altura);

   area_triangulo = (base*altura)/2;

   printf("Área do triangulo: %.1f\n", area_triangulo);
   system("Pause");

}
