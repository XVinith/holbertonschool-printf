#include "main.h"

int var_detect(char c)
{
	int i;
	char *ident = "dicspux";

	for (i = 0; ident[i]; i++)
	{
		if (ident[i] == c)
			switch (ident[i])
			{
			case 'd':
				/* code */
				break;

			case 'i':
				/* code */
				break;

			case 'c':
				/* code */
				break;

			case 's':
				/* code */
				break;

			case 'p':
				/* code */
				break;
			case 'u':
				/* code */
				break;
			case 'x':
				/* code */
				break;
			
			default:
				break;
			}
	}

	return (0);
}
