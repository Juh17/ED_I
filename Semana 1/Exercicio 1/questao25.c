#include <stdio.h>
#include <stdlib.h>

/* Leia a idade de uma pessoa expressa em dias e escreva-a expressa em anos, meses e dias.*/

main(){

   int idade_dias, a, m, d;
   printf("Informe sua idade em dias: ");
   scanf("%d", &idade_dias);

   a = idade_dias / 365;
   m = (idade_dias / 30) % 12;
   d = (idade_dias - a * 365) - (m * 30);

   printf("%d dias corresponde a %d anos, %d meses e %d dias.\n", idade_dias, a, m, d);
   system("Pause");
}
