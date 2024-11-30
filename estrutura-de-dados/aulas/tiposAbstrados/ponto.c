#include "./ponto.h"
#include <stdio.h>
#include <stdlib.h>

struct ponto
{
    int x;
    int y;
};

PPonto ponto_cria(){
    return (PPonto) malloc(sizeof(Ponto));
}

void ponto_destruir(PPonto p){
    free(p);
}

void ponto_definir(PPonto p, int x, int y){
    if(p!= NULL){
        p->x = x;
        p->y = y;
    }
}

int ponto_retornaX(PPonto p){
    if(p != NULL)
        return p->x;
    return -1;
}

int ponto_retornaY(PPonto p){
    if(p != NULL)
        return p->y;
    return -1;
    
}

void ponto_exibir(PPonto p){
    if(p!=NULL){
        printf("\nCoordenadas x,y: [%d,%d]\n", p->x, p->y);
    }
}