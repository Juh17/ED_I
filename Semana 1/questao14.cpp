#include <stdio.h>
#include <stdlib.h>

/* Leia uma letra e verifique se letra é "F" e escreva “F – Feminino” ou “M” e escreva “M – Masculino”,
se não for nem F ou M, escreva “Sexo Inválido”.*/

main(){
    char sexo;

    printf("Digite a letra referente ao genero: ");
    scanf("%s", &sexo);

    if(sexo =='f' || sexo == 'F'){
        printf("F - Feminino\n");
    }else if(sexo == 'm' || sexo == 'M'){
        printf("M - Masculino\n");
    }else{
        printf("Sexo Invalido\n");
    }
}
