#include <stdio.h>

int main()
{
    double pi = 3.14159, r, volu;
    scanf("%lf", &r);
    volu = (4/3.0) * pi * (r*r*r);
    printf("VOLUME = %.3lf", volu);
    return 0;
}
