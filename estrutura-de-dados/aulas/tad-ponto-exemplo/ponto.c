#include "ponto.h"
#include <stdlib.h>
#include <stdio.h>

struct ponto
{
    int x;
    int y;
};

PPonto ponto_criar(){
    return (PPonto) malloc (sizeof(Ponto));
}

void   ponto_destruir(PPonto p){
    free(p);
}

void   ponto_definir(PPonto p, int x, int y){
    if (p != NULL){
        p->x = x;
        p->y = y;
    }
}
int    ponto_retornaX(PPonto p){
    if (p != NULL)
        return p->x;
    return -1; //ponto sem coordenada
}

int    ponto_retornaY(PPonto p){
    if (p != NULL)
        return p->y;
    return -1; //ponto sem coordenada
}
void   ponto_exibir(PPonto p){
    if (p != NULL){
        printf("\nCoordenadas x,y: [%d,%d]\n", p->x, p->y);
    }
}
