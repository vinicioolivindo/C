#include <stdio.h>

int main()
{
    int n;
    int fat = 1;

    printf("Digite o numero para ver o fatorial: "); scanf("%d", &n);

    printf("!%d = ", n);
    for (int i = n; i > 0; i--)
    {
        fat *= i;
        printf("%d", i);

        if (i != 1)
            printf(" x ");

        if (i == 1)
            printf(" = %d", fat);
    }
}