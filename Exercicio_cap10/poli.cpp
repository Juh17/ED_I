#include <iostream>
#include <cmath>

typedef struct poli {
    float coef;
    int expo;
    struct poli *prox;

} *Poli;

Poli termo(float c, int e, Poli p) {
    Poli n = (poli*)malloc(sizeof(struct poli));
    n->coef = c;
    n->expo = e;
    n->prox = p;

    return n;
}

void exibirp(Poli P) {
    if(P == NULL) return;
    printf("%+.1f", P->coef);
    if(P->expo != 0) printf("*x^%d", P->expo);
    exibirp(P->prox);

}

void adt(float c, int e, Poli *P) {
    if(*P == NULL || (*P)->expo < e) {
        *P = termo(c, e, *P);
    } else if((*P)->expo == e) {
        (*P)->coef += c;
        if((*P)->coef == 0) {
            Poli n = *P;
            *P = n->prox;
            free(n);
        }
    } else {
        adt(c, e, &(*P)->prox);
    }
}

float valor(Poli P, float x) {
    if(P == NULL) return 0;
    else {
        return P->coef *pow(x, P->expo) + valor(P->prox, x);
    }
}

Poli derivada(Poli P) {
    if(P == NULL || P->expo == 0) return NULL;
    return termo(P->coef * P->expo, P->expo - 1, derivada(P->prox));
}

void destruirp(Poli *P) {
    if( (*P) == NULL) return;
    destruirp(&(*P)->prox);
    free(*P);
    *P = NULL;
}
