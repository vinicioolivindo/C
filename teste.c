#include <stdio.h>
#include <string.h>

int main() {
    char op[25];

    while(fgets(op, sizeof(op), stdin)) {
        op[strcspn(op, "\n")] = 0;

        if(strcmp(op, "esquerda") == 0) {
            printf("ingles\n");
        } else if(strcmp(op, "direita") == 0) {
            printf("frances\n");
        } else if(strcmp(op, "nenhuma") == 0) {
            printf("portugues\n");
        } else if(strcmp(op, "as duas") == 0) {
            printf("caiu\n");
        }
    }

    return 0;
}
