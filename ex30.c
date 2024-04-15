#include <stdio.h>
#include <math.h>

int main()
{
    double n;
    scanf("%lf", &n);
    double f = ((pow(((1+sqrt(5))/2),n)) - (pow(((1-sqrt(5))/2),n)))/sqrt(5);
    printf("%.1lf\n",f);
    return 0;
}
