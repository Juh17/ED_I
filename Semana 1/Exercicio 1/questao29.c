#include <stdio.h>
#include <stdlib.h>

/* Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum mecanismo para decidir o
numero de notas de cada valor que deve ser disponibilizado para o cliente que realizou o saque. Um possível
critério seria o da "distribuição ótima" no sentido de que as notas de menor valor disponíveis fossem
distribuídas em número mínimo possível. Por exemplo, se a maquina só dispõe de notas de R$ 50, de R$ 20,
de R$ 10, de R$ 5 e de R$ 2, para uma quantia solicitada de R$ 87, o programa deveria indicar uma nota de
R$ 50, uma nota de R$20,00, uma nota de R$ 10, uma nota de R$ 5 e uma nota de R$ 2. Escreva um programa
que receba o valor da quantia solicitada e retorne a distribuição das notas de acordo com o critério da
distribuição ótima.*/

main(){

   int valor, c50, c20, c10, c5, c2;

   printf("Informe o valor a ser sacado: ");
   scanf("%d", &valor);

   c50 = valor / 50;
   valor = valor % 50;

   c20 = valor / 20;
   valor = valor % 20;

   c10 = valor /10;
   valor = valor % 10;

   c5 = valor / 5;
   valor = valor % 5;

   c2 = valor / 2;

   printf("%d nota(s) de R$ 50,00.\n", c50);
   printf("%d nota(s) de R$ 20,00.\n", c20);
   printf("%d nota(s) de R$ 10,00.\n", c10);
   printf("%d nota(s) de R$ 5,00.\n", c5);
   printf("%d nota(s) de R$ 2,00.\n", c2);
   system("Pause");
}
