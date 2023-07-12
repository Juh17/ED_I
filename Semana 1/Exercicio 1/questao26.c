#include <stdio.h>
#include <stdlib.h>

/* Calcule a quantidade de dinheiro gasta por um fumante. Dados de entrada: o número de anos que ele fuma, o
no de cigarros fumados por dia e o preço de uma carteira (1 carteira tem 20 cigarros).*/

main(){

   int anos, qtd_cig_dia, qtd_cig_fumados;
   float prc_carteira, custo_dia, custo_total;
   const int qtd_cig_cart = 20;


   printf("Informe o número de cigarros fumados por dia: ");
   scanf("%d", &qtd_cig_dia);
   printf("Informe há quantos anos voce uma: ");
   scanf("%d", &anos);
   printf("Informe o valor de 1 carteira de cigarros: ");
   scanf("%f",&prc_carteira);

   custo_dia = (prc_carteira/qtd_cig_cart)*qtd_cig_dia;
   custo_total = (custo_dia*365)* anos;

   printf("Até o momento foram gastos R$ %.2f com cigarros.\n",custo_total);
   system("Pause");

}
