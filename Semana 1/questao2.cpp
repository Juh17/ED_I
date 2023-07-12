#include <stdio.h>
#include <stdlib.h>

/*
Leia um valor em horas e um valor em minutos, calcule e escreva o equivalente em minutos.
*/

main()
{
	float valor_horas, valor_minutos, valor_convertido, valor_total;
	
	printf("Digite um valor em horas: ");
	scanf("%f",&valor_horas);
	printf("Digite um valor em minutos: ");
	scanf("%f",&valor_minutos);
	
	valor_convertido = valor_horas * 60;
	valor_total = valor_convertido + valor_minutos;
	
	printf(" O valor total, em minutos, eh igual a: %0.2f", valor_total);
	
}
