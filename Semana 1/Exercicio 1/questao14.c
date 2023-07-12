#include <stdio.h>
#include <stdlib.h>

/*Leia uma temperatura em °C, calcule e escreva a equivalente em °F. (t°F = (9 * t°C + 160) / 5)*/
 main(){

    float temp_c, temp_f;
    printf("Insira uma temperatura em Celsius(C):  ");
    scanf("%f", &temp_c);

    temp_f = (9 * temp_c + 160)/5;

    printf("A temperatura informada em Celsius(C), equivale a %.1f Fahrenheit(F)\n", temp_f);
    system("Pause");

 }
