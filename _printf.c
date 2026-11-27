#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

// _putchar pour afficher un char (fonction donnée par Holberton)
int _putchar(char c)
{
	return (write(1, &c, 1));
}

// Le printf
int _printf(const char *format, ...)
{
	int i;
	va_list argc;
	va_start(argc, format);
	int print_counter = 0; // on doit créer compter le nombre de variable printer

	for (i = 0; format[i] != '\0'; i++) // tant que le string n'est pas vide.
	{
		if ((format[i] == '%') && var_detect(format[i + 1])) // si le char = '%' + une des lettre après le % valide.
		{													 // car ici var_detect retourne 1 ou 0 en depent du char suivant.
			switch (format[i + 1])
			{
			case 'd':
				decimal_detect(argc, print_counter);
				break;
			case 's':
				/* code */
				break;
			case 'c':
				/* code */
				break;
			case '%':
				/* code */
				break;
			
			default:
				break;
			}
			i++;		   // on incrémente i pour passer au char suivant.
		}
		else
			_putchar(format[i]); // si il n'a pas de '%' on affiche simplement les char
			print_counter++;
	}

	va_end(argc);
	return (0);
}
