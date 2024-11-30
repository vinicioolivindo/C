#include "ponto.h"

int main(){
    PPonto p1;
    p1 = ponto_criar();
    ponto_definir(p1, 10, 10);
    ponto_exibir(p1);
    ponto_destruir(p1);
}