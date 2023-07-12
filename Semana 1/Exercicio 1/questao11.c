#include <stdio.h>
#include <stdlib.h>

/* Leia o valor da base e altura de um retângulo, calcule e escreva sua área. (área = base * altura)*/

main(){

   float base, altura, area_retangulo;
   printf("Informe a base do retangulo: ");
   scanf("%f", &base);

   printf("Informe a altura do retangulo: ");
   scanf("%f", &altura);

   area_retangulo = (base * altura);

   printf("Área do retangulo: %.1f",area_retangulo);
   system("Pause");
}
