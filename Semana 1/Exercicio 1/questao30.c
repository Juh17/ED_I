#include <stdio.h>
#include <stdlib.h>

/* Uma loja vende seus produtos no sistema entrada mais duas prestações, sendo a entrada maior ou igual a cada
uma das duas prestações; estas devem ser iguais, inteiras e as maiores possíveis. Por exemplo, se o valor da
mercadoria for R$ 270,00, a entrada e as duas prestações são iguais a R$ 90,00; se o valor da mercadoria for
R$ 302,00, a entrada é de R$ 102,00 e as duas prestações são iguais a R$ 100,00. Escreva um programa que
receba o valor da mercadoria e escreva o valor da entrada e das duas prestações, conforme as regras acima.*/

main(){

   int m, p, e;
   const int qtd_p = 3;

   printf("Informe o valor da mercadoria(R$): ");
   scanf("%d",&m);

   p = m / qtd_p;
   e = p + m % qtd_p;

   printf("A mercadoria foi vendida por R$ %d reais, tendo uma entrada de R$ %d reais e o restante em 2x de R$ %d reais", m, e, p);
   system("Pause");

}
