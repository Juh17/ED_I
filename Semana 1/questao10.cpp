#include <stdio.h>
#include <stdlib.h>


/* Leia duas notas de um aluno e escreva na tela a palavra “Aprovado” se a média das duas notas for maior
ou igual a 7,0. Caso a média seja inferior a 7,0, escreva “O Aluno deve fazer a prova final!” e o
programa deve ler a nota da prova final e calcule a média final. Se a média final for maior ou igual a
6,0, o programa deve escrever “Aprovado!”, caso contrário deve escrever “Reprovado!”.*/

main()
{
	
	float n1, n2,media, mf,pf;
	printf("Digite a primeira nota: ");
	scanf ("%f",&n1);
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);
	
	media = (n1+n2)/2;

	
	if (media >= 7.0){
		printf("Aprovado!");
	}else if (media < 7.0){
		printf("O aluno deve fazer a prova final\n");
		printf("Digite a nota da prova final: ");
		scanf("%f",&pf);{
			mf = (media+pf)/2;
		if (mf >= 6.0){
				printf("Aprovado!");
		}else {
				printf("Reprovado!");
			}
		}
	
	}
}
