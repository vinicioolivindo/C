#include <stdio.h>
#define caracteres 21

int main()
{
    char string01[caracteres], string02[caracteres];

    fgets(string01, sizeof(string01), stdin);
    fgets(string02, sizeof(string02), stdin);


    printf("A primeira string lida foi: %s\n E sua segunda letra eh: %c \n",string01, string01[1]);
    printf("A segunda string lida foi: %s\n E sua segunda letra eh: %c",string02, string02[1]);
}
