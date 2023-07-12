#include <stdio.h>
#include <stdlib.h>

/* Leia uma temperatura em °F, calcule e escreva a equivalente em °C. (t°C = (5 * t°F - 160) / 9)*/

main(){

   float temp_f, temp_c;

   printf("Insira uma temperatura em Fahrenheit(F): ");
   scanf("%f", &temp_f);

   temp_c = (5 * temp_f - 160)/9;

   printf("A temperatura informada em Fahrenheit(F), equivale a %.1f Celsius(C).\n",temp_c);
   system("Pause");

}

