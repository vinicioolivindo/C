#include <stdio.h>

int main()
{
    int KM; float LI;
    // Quantidade km
    scanf("%d", &KM);
    // Quantidade de Gasolina
    scanf("%f", &LI);

    printf("%.3f km/l\n", KM/LI);
    return 0;
}
