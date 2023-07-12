#include <stdio.h>
#include <stdlib.h>

/* Leia 2 datas (cada data é composta por 3 variáveis inteiras: dia, mês e ano) e escreva qual delas é a mais
recente.*/

main(){
	int d1,d2, m1, m2, a1, a2;
	
	printf("Digite a primeira data, sem barras ou pontos, apenas espaco:");
	scanf("%d%d%d",&d1,&m1,&a1);
	printf("Digite a segunda data, sem barras ou pontos, apenas espaco: ");
	scanf("%d%d%d",&d2,&m2,&a2);
	
	if (a1 > a2){
		printf("A data mais recente eh %d/%d/%d",d1,m1,a1);
	}else if (a1 < a2){
		printf("A data mais recente eh %d/%d/%d",d2,m2,a2);
	}else if (m1 > m2){
		if (a1 > a2){
			printf("A data mais recente eh %d/%d/%d",d1,m1,a1);
		}else{
			printf("A data mais recente eh %d/%d/%d",d2,m2,a2);
		}
	}else if(m1 < m2){
		if(a1 > a2){
			printf("A data mais recente eh %d/%d/%d",d1,m1,a1);
		}else{
			printf("A data mais recente eh %d/%d/%d",d2,m2,a2);
		}
	}else if(d1 > d2){
		if (a1 > a2){
			printf("A data mais recente eh %d/%d/%d/",d1, m1, a1);
		}else{
			printf("A data mais recente eh %d/%d/%d",d1,m1,a2);
		}
	}else if (d1 < d2){
		if (a1 > a2){
			printf("A data mais recente eh %d/%d/%d",d2,m1,a1);
		}else{
			printf("A data mais recente eh %d/%d/%d",d2,m2,a2);
		}
    }
}


