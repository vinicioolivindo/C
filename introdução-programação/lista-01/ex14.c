#include <stdio.h>

int main()
{
    
    int KM,MIN;
    // Distancia a ser tomada pelo carro Y em relacao ao carro X.
    scanf("%d", &KM);
    // Em 60 minutos o carro Y consegue se distanciar 30 quilômetros do carro X,
    // ou seja, consegue se afastar 1 quilômetro a cada 2 minutos.
    // regra de 3 ===> 1 * km = 2 * min
    MIN = 2/1*KM;
    printf("%d minutos\n", MIN);
}
