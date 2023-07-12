#include <stdio.h>
#include <stdlib.h>

/* O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e
dos impostos (aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 28% e os
impostos de 45%, escreva um programa que leia o custo de fábrica de um carro e escreva o custo ao
consumidor.*/

main(){

   float custo_fab, custo_cons, cal_imposto, cal_percentual_dist;
   const float imposto = 0.45, percentual_dist = 0.28;

   printf("Informe o custo de fábrica do veículo(R$): ");
   scanf("%f", &custo_fab);

   cal_imposto = (custo_fab*imposto);
   cal_percentual_dist = (custo_fab * percentual_dist);
   custo_cons = (custo_fab + cal_imposto + cal_percentual_dist);

   printf("Custo de fábrica do veículo(R$): %.2f\n", custo_fab);
   printf("Custo ao consumidor(R$): %.2f\n", custo_cons);
   system("Pause");

}
