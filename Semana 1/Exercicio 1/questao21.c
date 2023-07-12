#include <stdio.h>
#include <stdlib.h>

/*Leia um número inteiro de meses, calcule e escreva quantos anos e quantos meses ele corresponde.*/

main(){

   int m1, a, m2;

   printf("Insira um valor em meses: ");
   scanf("%d", &m1);

   a = m1 / 12;
   m2 = m1 % 12;

   printf("%d meses corresponde a %d ano(s) e %d meses.\n", m1, a, m2);
   system("Pause");

}
