#include <stdio.h>
#include <stdlib.h>


/*
Leia 2 (dois) n�meros, verifique e escreva o menor e o maior entre os n�meros lidos.
*/

main()
{
	int num1, num2, maior;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);
	
	if (num1>num2){
		maior = num1;
		printf("O maior eh %d e o menor eh %d",maior, num2);
	}else if (num2>num1){
		maior = num2;
		printf("O maior eh %d e o menor eh %d",maior, num1);
	}else{
		printf("Os dois numeros sao iguais");
	}


}
