#include "./empresa.h"

int main()
{
    PFuncionarios empresa;
    empresa = empresa_criar(100);

    // Registra um funcionário
    empresa_registraFuncionario(empresa, 100);

    // Exibe o funcionário registrado
    empresa_exibirFuncionario(empresa, 2); // Certifique-se de usar a inscrição correta

    // Gera o contracheque
    empresa_contraCheque(empresa, 100, 2, 20);

    // Libera memória
    empresa_destruir(empresa, 100);

    return 0;
}
