#include <stdio.h>

int main() {
    int num, cont = 0, f = 1, i;
    scanf("%d", &num);
    
    while (num > 0) {
        f = 1; // Resetamos o fatorial a cada iteração
        i = 1; // Começamos a partir de 1 para calcular o fatorial
        
        // Calculamos o fatorial de i
        while (f <= num) {
            f *= i;
            i++;
        }
        
        // Voltamos uma unidade para calcular o fatorial correto
        i--;
        
        // Subtraímos o fatorial atual de num
        num -= f / i;
        
        // Incrementamos o contador de fatoriais utilizados
        cont++;
    }
    
    printf("%d\n", cont);
    return 0;
}
