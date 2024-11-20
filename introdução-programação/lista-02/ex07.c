#include <stdio.h>

int main(){
    double X;
    double N[100];
    scanf("%lf", &X);
    N[0] = X;

    for(int i = 1; i < 100; i++){
        N[i] = N[i-1] / 2;
    }
    for(int s = 0; s < 100; s++){
        X = N[s];
        printf("N[%d] = %.4lf\n", s, X);
    }

}