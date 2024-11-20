#include <stdio.h>

int main()
{
    float salario, novoS, reajuste;
    int por;
    scanf("%f", &salario);

    if ((salario >= 0)&&(salario <= 400.00)){
        por = 15;
        novoS = (0.15*salario)+salario;
        reajuste = novoS - salario;
    }
    else if ((salario >= 400.01)&&(salario <= 800.00)){
        por = 12;
        novoS = (0.12*salario)+salario;
        reajuste = novoS - salario;
    }
    else if ((salario >= 800.01)&&(salario <= 1200.00)){
        por = 10;
        novoS = (0.10*salario)+salario;
        reajuste = novoS - salario;
    }
    else if ((salario >= 1200.01)&&(salario <= 2000.00)){
        por = 7;
        novoS = (0.07*salario)+salario;
        reajuste = novoS - salario;
    }else{
        por = 4;
        novoS = (0.04*salario)+salario;
        reajuste = novoS - salario;
    }
    
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", novoS,reajuste,por);
    return 0;
}