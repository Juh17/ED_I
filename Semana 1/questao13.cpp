#include <stdio.h>
#include <stdlib.h>

/* Leia um n�mero e mostre na tela se o n�mero � positivo ou negativo. */

main(){
	
	int n;
	
	printf("Insira um numero inteiro: ");
	scanf("%d",&n);
	
	if(n >= 0  ){
		printf("O numero inserido eh POSITIVO!");
	}else{
		printf("O numero inserido eh NEGATIVO!");
    }
}
