#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char palavra[100];
    bool repetida = false;

    printf("Digite uma palavra: "); scanf("%s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        for (int j = i + 1; palavra[j] != '\0'; j++) {
            if (palavra[i] == palavra[j]) {
                repetida = true; break;
            }
        }
        if (repetida) break;
    }
    if (repetida) {
        printf("A palavra contem duas ou mais  letras repetidas.\n");
    } else {
        printf("A palavra nao contém duas letras repetidas.\n");
    }

    return 0;
}
