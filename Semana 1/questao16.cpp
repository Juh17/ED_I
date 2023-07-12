#include <stdio.h>
#include <stdlib.h>

/* Leia o preço de três produtos e informe qual produto deve ser comprado, sabendo que a decisão é
sempre pelo mais barato.*/

main(){
	float p1, p2, p3,menor;
	printf("Preco produto 1 R$: ");
	scanf("%f",&p1);
	printf("Preco produto 2 R$: ");
	scanf("%f",&p2);
	printf("Preco produto 3 R$: ");
	scanf("%f",&p3);
	
	if (p1<p2 && p1 < p3){
		printf("O produto 1 deve ser comprado, pois tem menor custo");
	}else if(p2 < p1 && p2 < p3){
		printf("O produto 2 deve ser comprado, pois tem menor custo");
	}else if(p3 < p1 && p3 < p2){
		printf("O produto 3 deve ser comprado, pois tem o menor custo");
	}else{
		printf("Existe mais de um produto com menor preco");
	}
}
