#include <stdio.h>
#include <stdlib.h>

/* Leia uma velocidade em m/s, calcule e escreva esta velocidade em km/h. (Vkm/h = Vm/s * 3.6)*/

main(){

  float v_ms, v_kmh;
  printf("Digite uma velocidade em m/s: ");
  scanf("%f", &v_ms);

  v_kmh = (v_ms * 3.6);
  printf("O valor digitado em m/s equivale, em km/h, a: %.1f\n",v_kmh);

  system("Pause");

}
