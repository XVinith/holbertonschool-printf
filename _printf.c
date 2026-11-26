#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _printf(const char *format, ...)
{
	int i;
	va_list argc;
	va_start(argc, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if ((format[i] == '%') && var_detect(format[i + 1]))
		{
			_putchar('(');
			_putchar('x');
			_putchar(')');
			i++;
		}
		else
			_putchar(format[i]);
		// var_detect(format[i]);
	}

	return (0);
}
