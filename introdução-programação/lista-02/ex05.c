#include <stdio.h>

int main() {
    int T, N;
    unsigned long long vetor[61];
    vetor[0] = 0;
    vetor[1] = 1;
    for (int i = 2; i <= 60; i++) {
        vetor[i] = vetor[i - 1] + vetor[i - 2];
    }
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        printf("Fib(%d) = %llu\n", N, vetor[N]);
    }

    return 0;
}
