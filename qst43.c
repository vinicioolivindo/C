#include <stdio.h>

int encontrarValor(int linhas, int colunas, int valor, int matriz[linhas][colunas])
{

    int resultNaoEcontrado = -1;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (matriz[i][j] == valor)
            {
                printf("Valor encontrado nas coordenadas [%d][%d]", i,j);
                return;
            }
        }
    }
    printf("%d", resultNaoEcontrado);
}

int main()
{
    int col = 3;
    int lin = 3;
    int valor = 0;
    int Matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    scanf("%d", &valor);
    encontrarValor(lin, col, valor, Matriz);
    
};