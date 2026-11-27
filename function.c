#include "main.h"

int var_detect(char c)
{
	int i;
	char *ident = "dicspux";

	for (i = 0; ident[i]; i++)
	{
		if (ident[i] == c)
			return (1);
	}

	return (0);
}

char print_decimal()
