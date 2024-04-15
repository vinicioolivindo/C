#include <stdio.h>

int main()
{
    int sub,n;
    scanf("%d", &sub);
    if (sub>0 && sub<13){
         n = sub; sub--;
        do{
            n = n * sub;
            sub--;
        }while(sub > 0);
        printf("%d\n", n);
    }  
    return 0;
}
