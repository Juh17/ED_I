#include <stdio.h>
#include <stdlib.h>

/* Leia 3 notas de um aluno e o peso de cada nota, calcule e escreva a média ponderada.*/

main(){

   float n1, n2, n3, p1, p2, p3, media_ponderada;
   printf("Informe as 3 notas do aluno: ");
   scanf("%f%f%f",&n1, &n2, &n3);

   printf("Informe,respectivamente, o peso das notas informadas anteriormente: ");
   scanf("%f%f%f", &p1, &p2, &p3);

   media_ponderada = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);

   printf("A média ponderada das notas informadas é igual a: %.2f\n",media_ponderada);
   system("Pause");

}
