#include <stdio.h>
#include <stdlib.h>

/* Leia o turno em que um aluno estuda, sendo M para matutino, V para Vespertino ou N para Noturno e
escreva a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.*/

main(){
	char turno;
	
	printf("Digite um turno:\n M - matutino\n V - vespertino\n N - noturno\n ");
	scanf("%s", &turno);
	
	if(turno == 'm' || turno == 'M'){
		printf("Bom dia!");
   }else if(turno == 'v' || turno == 'V'){
		printf("Boa Tarde!");
	}else if(turno == 'n' || turno == 'N'){
		printf("Boa Noite!");
	}else{
		printf("Valor Invalido!");
	}
	
	
}
