#include <stdio.h>

void tabuadaDoCinco(int n, char opc)
{
    int max = 0;
    switch (opc)
    {
    case 'm':
        while (max <= 10)
        {
            printf("%d x %d = %d\n", n, max, n * max);
            max++;
        }
        break;
    case 's':
        while (max <= 10)
        {
            printf("%d + %d = %d\n", n, max, n + max);
            max++;
        }
        break;
    case 'b':
        while (max <= 10)
        {
            printf("%d - %d = %d\n", n, max, n - max);
            max++;
        }
        break;

    default:
        printf("operacao invalida");
        break;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    tabuadaDoCinco(n, 'm');
    printf("\n");
    tabuadaDoCinco(n, 's');
    printf("\n");
    tabuadaDoCinco(n, 'b');
    printf("\n");


}