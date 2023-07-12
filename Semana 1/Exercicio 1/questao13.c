#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Leia o valor do raio de uma esfera, calcule e escreva seu volume. (v = (4 *  * r3) / 3) ( = 3,14)*/

main(){

   float r_esfera, potencia,v;
   const float pi = 3.14;

   printf("Insira o valor do Raio de uma esfera: ");
   scanf("%f", &r_esfera);

    v = (4 * pi * (pow(r_esfera,3)))/3;

    printf("Volume do raio de uma esfera: %.2f\n", v);
    system("Pause");


}
