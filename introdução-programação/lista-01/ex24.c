#include <stdio.h>

int main()
{
    int n,temp,temp2,n1 = 0, n2 = 1, n3 = n1+n2;
    scanf("%d", &n);
    printf("%d %d %d ", n1,n2,n3);
    n-=3;
    if ((n>0)&&(n<46)){
        do{
            temp = n2;
            n1 = temp;
            temp2 = n3;
            n2 = temp2;
            n3 = n1+n2;
            if (n == 1){
                printf("%d\n ",n3);
            }else{
            printf("%d ",n3);
            }
            n--;
        }while (n > 0);
    }
    return 0;
}
