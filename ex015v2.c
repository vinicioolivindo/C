#include <stdio.h>

int main() {
    // Variável para armazenar o valor inteiro (tempo em segundos)
    int segundos;

    // Leitura do valor inteiro
    scanf("%d", &segundos);

    // Cálculos para converter segundos para horas, minutos e segundos
    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    segundos = segundos % 60;

    // Impressão do resultado no formato horas:minutos:segundos
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}
