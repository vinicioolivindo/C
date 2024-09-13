#include <stdio.h>
#include <string.h>
#define caracteres 21

void removeNewLine(char* string)
{
    if (string[strlen(string) - 1] == '\n')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    char string01[caracteres], string02[caracteres];

    printf("Digite a primeira string (ate 20 caracteres): ");
    fgets(string01, caracteres, stdin);
    printf("Digite a segunda string (ate 20 caracteres): ");
    fgets(string02, caracteres, stdin);

    removeNewLine(string01);
    removeNewLine(string02);

    printf("A primeira string lida foi: %s\nE sua segunda letra eh: %c \n", string01, string01[1]);
    printf("A segunda string lida foi: %s\nE sua segunda letra eh: %c", string02, string02[1]);
}
