#include <stdio.h>
#include <stdlib.h>
#include "./pilha.h"

int aberto(char item){
   return item == '[' || item == '{' || item == '(';
}

int fechado(char topoItem, char ItemAtual){
   if (Item == '['){
      return ItemAtual == ']';
   }else if (topoItem == '{'){
      return ItemAtual == '}';
   }else{
      return ItemAtual ==')';
   }
}

int verificar(char ex[]){
   Pilha pilha == criarPilha(strlen(ex));

   for(int i = 0; i < strlen(ex); i++){
      if(aberto(ex[i])){
         push(ex[i], pilha);
      }else{
         if(fechado(pilha->item[pilha->topo]ex[i])){
            return 0;
         }else{
            push(ex[i], pilha);

            pop(pilha);
            pop(pilha);
         }
      }
   }
}

int main(){
  char* exp = (char*)malloc(sizeof(char)* 300);

  printf("Insira a expressão a ser verificada: ");
  scanf("%s", &ex);

  int balanceada = verificar(ex);

  if(balanceada){
     printf(Balanceada!\n);
  }else{
     printf("Não balanceada!\n");
  }

  system("PAUSE");
}

