#include <stdio.h>
#include <stdlib.h>

/*Leia um número inteiro de minutos, calcule e escreva quantos dias, quantas horas e quantos minutos ele
corresponde.*/

main(){

   int min1, d, h, min2;

   printf("Insira um valor em minutos: ");
   scanf("%d", &min1);

   d = (min1 / 60)/24;
   h = min1 / 60;
   min2 = min1 % 60;

   printf("%d minutos corresponde a %d dia(s), %d hora(s) e %d minuto(s).\n", min1, d, h, min2);
   system("Pause");


}
