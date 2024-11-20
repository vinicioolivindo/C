#include <stdio.h>

int main()
{
    int i,cont;
    float num,soma;

    for(i = 0; i < 6; i++){
        scanf("%f", &num);
        if (num >= 0){
            cont++;
            soma+=num;
            }
    }
    printf("%d valores positivos\n", cont);
    printf("%.1f\n", soma/cont);
    return 0;
}
