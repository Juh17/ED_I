#include <stdio.h>
#include <stdlib.h>

/* Leia um número inteiro (3 dígitos) e escreva o inverso do número. (Ex.: num = 532 ; inverso =235)*/


main(){

  int num, cen, uni, dez;
  printf("Insira um número de 3 dígitos: ");
  scanf("%d", &num);

  cen = (((num%100)%10)/1);
  uni = ((num%100)/10);
  dez = num/100;



  printf("O inverso do número %d é igual a: %d%d%d",num,cen,uni,dez);
  system("Pause");

}
