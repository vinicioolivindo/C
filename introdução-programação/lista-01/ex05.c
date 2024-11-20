#include <stdio.h>
 
int main() {
 
    double n1,n2,MEDIA;
    scanf("%lf", &n1);
    scanf("%lf", &n2);
    MEDIA = (n1 * 3.5 + n2 * 7.5)/11;
    printf("MEDIA = %.5lf\n", MEDIA);
 
    return 0;
}