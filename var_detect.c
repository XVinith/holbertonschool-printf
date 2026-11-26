#include "main.h"

int var_detect(char c)
{
	int i;
	char *ident = "dicspux";

	for (i = 0; ident[i]; i++)
	{
		if (ident[i] == c)
		{
			// _putchar('X');
			return (1);
		}
	}

	return (0);
}
