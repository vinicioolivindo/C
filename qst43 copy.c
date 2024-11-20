#include <stdio.h>

int soma(int valor1, int valor2)
{
    int somaDosValores = valor1 + valor2;
    return somaDosValores;
};


int main()
{
    int num1 = 5;
    int num2 = 10;

    printf("%d", soma(num1, num2));
};