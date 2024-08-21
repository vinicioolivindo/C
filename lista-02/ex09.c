#include <stdio.h>
#include <ctype.h>

int main()
{
	char str[50];
	int i = 0;
	fgets(str, sizeof(str), stdin);

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			if (i % 2 == 0)
			{
				str[i] = toupper(str[i]);
			}
		}
		i++;
	}
	printf("%s", str);
	return 0;
}
