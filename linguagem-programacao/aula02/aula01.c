#include <stdio.h>
#include <string.h>

#define MAX_CLIENTES 100

// Estrutura para armazenar os dados de um cliente
struct Cliente {
    int id;
    char nome[50];
    int idade;
    char email[50];
};

// Variáveis globais
struct Cliente clientes[MAX_CLIENTES];
int totalClientes = 0;

// Função para cadastrar um cliente
void cadastrarCliente() {
    if (totalClientes < MAX_CLIENTES) {
        struct Cliente novoCliente;
        novoCliente.id = totalClientes + 1;

        printf("Digite o nome do cliente: ");
        scanf(" %[^\n]", novoCliente.nome);

        printf("Digite a idade do cliente: ");
        scanf("%d", &novoCliente.idade);

        printf("Digite o email do cliente: ");
        scanf(" %[^\n]", novoCliente.email);

        clientes[totalClientes] = novoCliente;
        totalClientes++;

        printf("Cliente cadastrado com sucesso!\n");
    } else {
        printf("Limite máximo de clientes atingido!\n");
    }
}

// Função para listar todos os clientes cadastrados
void listarClientes() {
    if (totalClientes == 0) {
        printf("Nenhum cliente cadastrado.\n");
    } else {
        printf("Lista de Clientes:\n");
        for (int i = 0; i < totalClientes; i++) {
            printf("ID: %d\n", clientes[i].id);
            printf("Nome: %s\n", clientes[i].nome);
            printf("Idade: %d\n", clientes[i].idade);
            printf("Email: %s\n\n", clientes[i].email);
        }
    }
}

// Função para buscar um cliente pelo ID
void buscarClientePorID(int id) {
    int encontrado = 0;
    for (int i = 0; i < totalClientes; i++) {
        if (clientes[i].id == id) {
            printf("Cliente encontrado:\n");
            printf("ID: %d\n", clientes[i].id);
            printf("Nome: %s\n", clientes[i].nome);
            printf("Idade: %d\n", clientes[i].idade);
            printf("Email: %s\n\n", clientes[i].email);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Cliente com ID %d não encontrado.\n", id);
    }
}

// Função principal
int main() {
    int opcao, idBusca;

    do {
        printf("\nMenu de Opções:\n");
        printf("1. Cadastrar Cliente\n");
        printf("2. Listar Clientes\n");
        printf("3. Buscar Cliente por ID\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarCliente();
                break;
            case 2:
                listarClientes();
                break;
            case 3:
                printf("Digite o ID do cliente que deseja buscar: ");
                scanf("%d", &idBusca);
                buscarClientePorID(idBusca);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}