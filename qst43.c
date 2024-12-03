#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Livro
{
    char *nome;
    char *isbn;
    float preco;
    int score;
    char *editora;
} pLivro;

pLivro *livro_aloc(int qtde)
{
    pLivro *L = (pLivro *)malloc(qtde * sizeof(pLivro));
    for (int i = 0; i < qtde; i++)
    {
        L[i].nome = (char *)malloc(50 * sizeof(char)); 
        L[i].isbn = (char *)malloc(50 * sizeof(char));
        L[i].editora = (char *)malloc(50 * sizeof(char));
    }
    return L;
}

void livro_ler(pLivro *livros, int qtde)
{
    for (int i = 0; i < qtde; i++)
    {
        getchar(); // Limpa o buffer residual

        fgets(livros[i].nome, 50, stdin);
        livros[i].nome[strcspn(livros[i].nome, "\n")] = '\0'; // Remove '\n'

        fgets(livros[i].isbn, 50, stdin);
        livros[i].isbn[strcspn(livros[i].isbn, "\n")] = '\0'; // Remove '\n'

        scanf("%f", &livros[i].preco);

        scanf("%d", &livros[i].score);
        getchar(); // Limpa o buffer residual

        fgets(livros[i].editora, 50, stdin);
        livros[i].editora[strcspn(livros[i].editora, "\n")] = '\0'; // Remove '\n'
    }
}


void livro_exibe(pLivro *livros, int qtde)
{
    for (int e = 0; e < qtde; e++)
    {
        printf("Livro %d: \nNome: %s\nISBN: %s\nPreço: R$ %.2f\nScore: %d\nEditora: %s",
               e + 1,
               livros[e].nome,
               livros[e].isbn,
               livros[e].preco,
               livros[e].score,
               livros[e].editora);
        if (e != qtde - 1)
        {
            printf("\n\n");
        }
    }
}

void livro_desaloca(pLivro *livros, int qtde)
{
    for (int i = 0; i < qtde; i++)
    {
        free(livros[i].nome);
        free(livros[i].isbn);
        free(livros[i].editora);
    }
    free(livros);
}

int main()
{
    int qtde;

    scanf("%d", &qtde);
    if (qtde == 0)
    {
        printf("Sem livros");
    }
    else
    {

        pLivro *livros = livro_aloc(qtde);

        livro_ler(livros, qtde);
        livro_exibe(livros, qtde);
        livro_desaloca(livros, qtde);
    }

    return 0;
}
