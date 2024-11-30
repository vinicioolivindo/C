#include <stdio.h>


int main()
{
    int somaValores = 0;
    int count = 0;
    int number;
    do
    {
        scanf("%d", &number);
        somaValores+=number;
        count++;
    } while (count <= 20);
    printf("%.2f", (float)somaValores/20);
    
}