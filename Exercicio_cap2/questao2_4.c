#include <stdio.h>
#include "./pilha1.h"

int main() {
    int j;
    float item;
    float aux;

    printf("Insira a quantidades de numeros a serem empilhados: ");
    scanf("%d", &j);

    Pilha pilhaB = criarPilha(j);
    Pilha pilhaA = criarPilha(j);


    printf("Ńúmeros: ");
    for(int i = 0; i < j; i++) {
        scanf("%f", &item);
        push(item, pilhaB);
    }

    while(!PilhaVazia(pilhaB)) {
        if (!PilhaVazia(pilhaA) || pilhaA->item[pilhaA->topo] >= pilhaB->item[pilhaB->topo]) {
            push(pop(pilhaB), pilhaA);
        } else {
            aux = pop(pilhaB);
            printf("aux: %.2f\n", aux);

            while (!PilhaVazia(pilhaA) && pilhaA->item[pilhaA->topo] < aux) {
                push(pop(pilhaA), pilhaB);
            }
            push(aux, pilhaA);
        }
    }

    system("PAUSE");
