#include <stdio.h>

int main()
{
    int T, cont = 0;

    scanf("%d", &T);
    for (int i = 0; i < 1000; i++)
    {
        if(cont >= T){
            cont = 0;
        }
        printf("N[%d] = %d\n", i, cont);
        cont++;
    }
}