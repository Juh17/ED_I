#include <stdio.h>
#include <stdlib.h>

/*Sabendo que latão é constituído de 70% de cobre e 30% de zinco, escreva um programa que calcule a
quantidade de cada um desses componentes para se obter certa quantidade de latão (em kg), informada pelo
usuário.*/

main(){

   float kg_latao, calc_cobre, calc_zinco;
   const float cobre = 0.7, zinco = 0.3;

   printf("Informe a quantidade de latao(Kg): ");
   scanf("%f", &kg_latao);

   calc_cobre = (kg_latao * cobre);
   calc_zinco = (kg_latao * zinco);

   printf("%.1f kg de latao possui %.1f kg de cobre e %.1f kg de zinco.\n", kg_latao, calc_cobre, calc_zinco);
   system("Pause");

}
