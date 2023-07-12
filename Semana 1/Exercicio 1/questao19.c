#include <stdio.h>
#include <stdlib.h>

/* Leia um número inteiro de metros, calcule e escreva quantos Km e quantos metros ele corresponde.*/

main(){

   int m1, m2, km;

   printf("Insira um valor em metros(m): ");
   scanf("%d", &m1);

   m2 = m1 % 1000;
   km = m1/1000;

   printf(" %d metros corresponde a %d Km e %d metros.\n", m1, km, m2);
   system("Pause");
}
