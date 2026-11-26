#include "main.h"

int var_detect(char c) // On renvoie 1 ou 0 en dépent du char en paramètre.
{
	int i;
	char *ident = "dicspux"; // ici les possible paramètre après un '%'. 
							 // exemple : %d qui prend un int.

	for (i = 0; ident[i]; i++) // pour chaque char de ident (donc les possible paramètre)
	{
		if (ident[i] == c)     // si la lettre correspond a une des lettre de ident on return 1.
			return (1);
	}

	return (0); // sinon on return 0.
}
