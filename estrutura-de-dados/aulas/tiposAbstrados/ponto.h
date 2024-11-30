#ifndef _ponto_h
#define _ponto_h

typedef struct ponto Ponto, *PPonto;

PPonto ponto_cria();
void ponto_definir(PPonto p, int x, int y);
int ponto_retornaY(PPonto p);
int ponto_retornaX(PPonto p);
void ponto_destruir(PPonto p);
void ponto_exibir(PPonto p);

#endif