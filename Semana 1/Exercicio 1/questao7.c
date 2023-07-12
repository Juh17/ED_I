#include <stdio.h>
#include <stdlib.h>

/* Leia um valor em real (R$), calcule e escreva 70% deste valor.*/

main(){

   float real, porcentagem;
   printf("Escreva um valor em real(R$): ");
   scanf("%f", &real);

   porcentagem = (real * 0.7);

   printf("70 por cento do valor inserido R$: %.2f\n", porcentagem);
   system("Pause");
}
