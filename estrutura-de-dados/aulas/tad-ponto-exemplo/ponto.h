#ifndef __ponto__h
#define __ponto__h

typedef struct ponto Ponto, *PPonto;

PPonto ponto_criar();
void   ponto_destruir(PPonto p);
void   ponto_definir(PPonto p, int x, int y);
int    ponto_retornaX(PPonto p);
int    ponto_retornaY(PPonto p);
void   ponto_exibir(PPonto p);

#endif