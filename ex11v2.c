#include <stdio.h>

int main()
{
    int a,b,c,maiorAB;
    scanf("%d" "%d" "%d", &a, &b, &c);
    maiorAB = (a+b+c*(a-b))/2;
    printf("%d eh o maior\n", maiorAB);
    return 0;
}
