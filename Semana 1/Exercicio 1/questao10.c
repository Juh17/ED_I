#include <stdio.h>
#include <stdlib.h>


/* Leia o valor do lado de um quadrado, calcule e escreva sua área. (área = lado2)*/

main(){

   float l, area;
   printf("Informe o valor do lado de um quadrado: ");
   scanf("%f", &l);

   area = l * l;

   printf("Área do quadrado: %.1f\n", area);
   system ("Pause");

}
