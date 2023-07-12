#include <stdio.h>
#include <stdlib.h>

/* Leia 2 números inteiros, calcule e escreva o quociente e o resto da divisão do 1o pelo 2o.*/

main(){

   int num1, num2;
   float quociente, resto;

   printf("Digite um número: ");
   scanf("%d", &num1);
   printf("Digite um segundo número: ");
   scanf("%d", &num2);

   quociente = num1/num2;
   resto = num1%num2;

   printf("O quociente da divisao entre %d e %d eh igual a: %.2f\n",num1, num2, quociente);
   printf("O resto da divisao entre %d e %d eh igual a: %.2f\n", num1, num2, resto);
   system("Pause");
}
