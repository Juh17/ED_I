#include <stdio.h>
#include <stdlib.h>

/*Leia uma velocidade em km/h, calcule e escreva esta velocidade em m/s. (Vm/s = Vkm/h / 3.6)*/

main(){

  float v_kmh, v_ms;
  printf("Insira uma velocidade em Km/h: ");
  scanf("%f", &v_kmh);

  v_ms = (v_kmh / 3.6);
  printf("A velocidade lida em Km/h equivale, em m/s, a: %.1f\n", v_ms);
  system("Pause");
}
