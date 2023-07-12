#include <stdio.h>
#include <stdlib.h>

/* Leia um número inteiro de horas, calcule e escreva quantas semanas, quantos dias e quantas
horas ele corresponde.*/

main(){

   int n, s, d, h;

   printf("Insira um valor em horas: ");
   scanf("%d", &n);

   s = (n/24)%7;
   d = (n/24);
   h = (n%60);

   printf("%d horas será igual a %d semanas, %d dias, %d horas.\n", n, s, d, h);
   system("Pause");
}
