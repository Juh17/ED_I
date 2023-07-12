#include <stdio.h>
#include <stdlib.h>

/* Leia 1 (um) número de 2 (dois) dígitos, verifique e escreva se o algarismo da dezena é igual ou diferente
do algarismo da unidade.
*/

main(){
	int num,dezena,unidade;
	printf("Digite um numero de dois digitos: ");
	scanf("%d",&num);
	
	dezena = (num/1)%10;
	unidade = num/10;
	
	if (dezena == unidade){
		printf("O algarismo da dezena do numero digitado eh igual ao algarismo de sua unidade");
	}else{
		printf("O algarismo da dezena do numero digitado eh diferente de sua unidade");
	}	
}
