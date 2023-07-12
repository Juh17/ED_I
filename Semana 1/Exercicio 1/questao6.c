#include <stdio.h>
#include <stdlib.h>

/*Leia o salário de um trabalhador e escreva seu novo salário com um aumento de 25%.*/

main(){

  float sal, acres, novo_sal;
  printf("Salário atual(R$): ");
  scanf("%f", &sal);

  acres = (sal * 0.25);
  novo_sal = (sal + acres);

  printf("Após o acréscimo de 25%, o novo salário é R$: %.2f\n", novo_sal);
  system("Pause");

}
