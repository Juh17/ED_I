#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* Leia dois valores e uma das seguintes operações a serem executadas (codificadas da seguinte forma: 1 –
Adição, 2 – Subtração, 3 – Multiplicação e 4 – Divisão). Calcule e escreva o resultado dessa operação
sobre os dois valores lidos.*/

main()
{
	
	int valor1, valor2,op,adicao,sub,mult,div;
	
	printf("Digite um numero: ");
	scanf("%d",&valor1);
	printf("Digite outro numero: ");
	scanf("%d",&valor2);
	printf("Escolha a operacao a ser realizada:\n[1] - Adicao\n[2] - Subtracao\n[3] - Multiplicacao\n[4] - Divisao\n ");
	scanf("%d",&op);
	
	if (op == 1){
		adicao = (valor1+valor2);
		printf("A soma de %d e %d eh igual a %d",valor1,valor2,adicao);
   }else if(op == 2){
		sub = (valor1-valor2);
		printf("A diferenca entre %d e %d eh igual a %d",valor1,valor2,sub);
    }else if(op == 3){
    	mult = (valor1*valor2);
    	printf("O produto entre %d e %d eh igual a %d",valor1, valor2, mult);
	}else if(op == 4){
		div = (valor1/valor2);
		printf("A divisao entre %d e %d eh igual a %d",valor1, valor2, div);
	}else{
		printf("OPERACAO INEXISTENTE");
	}
	
}
