#include <stdio.h>
#include <string.h>
#define caracteres 21

void removeSpace(char* string)
{
    if (string[strlen(string) - 1] == '\n')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    char string01[caracteres], string02[caracteres];

    fgets(string01, sizeof(string01), stdin);
    fgets(string02, sizeof(string02), stdin);

    removeSpace(string01);
    removeSpace(string02);

    printf("A primeira string lida foi: %s\nE sua segunda letra eh: %c \n", string01, string01[1]);
    printf("A segunda string lida foi: %s\nE sua segunda letra eh: %c", string02, string02[1]);
}
