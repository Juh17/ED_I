#include <stdio.h>
#include <conio.h>

/*
Leia um número inteiro (3 dígitos), calcule e escreva a soma de seus elementos (C + D + U).
*/

main()
{
	int num_inteiro, c, d, u, soma;
	
	printf("Digite um nuemro de 3 digitos: ");
	scanf("%d",&num_inteiro);
	
	c = num_inteiro/100;
	d = (num_inteiro - c*100)/10;
	u = num_inteiro % 10;
	soma = c+d+u;
	
	printf("A soma dos elementos de %d eh igual a %d",num_inteiro, soma);
	
}
