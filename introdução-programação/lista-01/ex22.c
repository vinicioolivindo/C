#include <stdio.h>

int main()
{
    int qnt,i;
    float mp,n1,n2,n3;
    scanf("%d", &qnt);

    for(i = 0; i < qnt; i++){
        scanf("%f %f %f", &n1,&n2,&n3);
        mp = ((n1*2)+(n2*3)+(n3*5))/10;
        printf("%.1f\n", mp);
    } 
    return 0;
}
