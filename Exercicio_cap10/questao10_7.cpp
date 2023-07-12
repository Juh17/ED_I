#include <iostream>
#include "./poli.cpp"



void soma(Poli *poli1, Poli poli2) {
    if(poli2 == NULL) return;
    adt(poli2->coef, poli2->expo, poli1);
    soma(poli1, poli2->prox);
}

int main() {
    Poli poli1 = termo(1, 3, termo(6, 3, NULL));
    Poli poli2 = termo(2, 1, termo(4, 9, termo(7, 3, NULL)));
    soma(&poli1, poli2);

    exibirp(poli1);

}
