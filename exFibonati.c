#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 1, sum, T;
    int vetor[20];
    vetor[0] = n1, vetor[1] = n2;
    for (int i = 2; i < 20; i++)
    {
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
        vetor[i] = sum;
    }
    scanf("%d", &T);
    for (int i = 0; i < 20; i++)
    {
        if (i == T)
        {
            printf("Fib(%d) = %d ",i, vetor[i]);
        }
    }
}