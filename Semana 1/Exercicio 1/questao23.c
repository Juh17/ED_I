#include <stdio.h>
#include <stdlib.h>

/* Leia 3 números, calcule e escreva a média dos números.*/

main(){

   float n1, n2, n3, media;
   printf("Digite 3 números: ");
   scanf("%f%f%f", &n1, &n2, &n3);

   media = (n1+n2+n3)/3;

   printf("A média dos números %.1f, %.1f e %.1f é igual a: %.1f.\n", n1, n2, n3, media);
   system("Pause");

}
