#include <stdio.h>
#include <stdlib.h>

/* Leia o valor do dólar e um valor em dólar, calcule e escreva o equivalente em real (R$).*/

main(){

   float c_dolar, v_dolar, v_real;
   printf("##########CONVERSOR###########\n\n");
   printf("Qual a cotaçao do Dólar em relacao ao Real no dia de hoje?: ");
   scanf("%f", &c_dolar);
   printf("Insira um valor em Dólar($): ");
   scanf("%f", &v_dolar);

   v_real = (c_dolar * v_dolar);
   printf("O valor de $ %.2f equivalem a R$ %.2f!!!\n", v_dolar, v_real);
   system("Pause");

}
