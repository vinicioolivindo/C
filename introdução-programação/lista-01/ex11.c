#include <stdio.h>

int main()
{
    int a,b,c,maior;
    scanf("%d %d %d", &a, &b, &c);

    if ((a>b && a>c) || (a == b && a > c) || (a == c && a > b) ){
        maior = a;
    }else if ((b>a && b>c) || (b == c && b > a)){
        maior = b;
    }else if ((a == b && a > c) || (a == c && a > b) ){
        maior = a;
    }else{
        maior = c;
    }
    printf("%d eh o maior\n", maior);
}
