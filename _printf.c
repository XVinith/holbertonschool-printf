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
	va_start(argc, format); // les vaiadiques, je vais m'en servire plus tard.

	for (i = 0; format[i] != '\0'; i++) // tant que le string n'est pas vide.
	{
		if ((format[i] == '%') && var_detect(format[i + 1])) // si le char = '%' + une des lettre après le % valide.
		{													 // car ici var_detect retourne 1 ou 0 en depent du char suivant.
			_putchar('(');									 // donc si après le % il y'a un lettre valide on rentre dans la condition.
			_putchar('x');
			_putchar(')'); // on affiche (x)
			i++;		   // on incrémente i pour passer au char suivant.
		}
		else
			_putchar(format[i]); // si il n'a pas de '%' on affiche simplement les char
	}

	return (0);
}
