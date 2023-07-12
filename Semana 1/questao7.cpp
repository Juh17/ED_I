#include <stdio.h>
#include <conio.h>

/* Leia 3 (três) números, verifique e escreva o maior entre os números lidos.*/

main()
{
	int num1, num2, num3, maior;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);
	printf("Digite o terceiro numero: ");
	scanf("%d",&num3);
	
	if (num1>num2 && num1>num3){
		maior = num1;
		printf("O maior numero entre %d, %d e %d eh %d",num1,num2,num3,maior);
	}else if(num1<num2 && num2>num3){
		maior = num2;
		printf(" O maior numero entre %d, %d, e %d eh %d",num1,num2,num3,maior);
	}else if(num1<num3 && num2<num3){
		maior = num3;
		printf("O maior numero entre %d, %d e %d eh %d",num1,num2,num3,maior);	
	}else{
		printf("Os numeros digitados sao iguais");
	}
}

