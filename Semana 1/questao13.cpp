#include <stdio.h>
#include <stdlib.h>

/* Leia um número e mostre na tela se o número é positivo ou negativo. */

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
