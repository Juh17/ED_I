#include <stdio.h>
#include <stdlib.h>

/*Leia a idade de uma pessoa expressa em anos, meses e dias e escreva-a expressa apenas em dias.*/

main(){

    int a, m, d, anos, meses, idade_dias;

    printf("<---------- Informe sua idade ----------> \n");
    printf("Anos: ");
    scanf("%d", &a);
    printf("Meses: ");
    scanf("%d", &m);
    printf("Dias: ");
    scanf("%d", &d);

    anos = a * 365;
    meses =  m * 30;

    idade_dias = anos + meses + d;

    printf(" A idade informada corresponde a %d dias.\n", idade_dias);
    system("Pause");

}
