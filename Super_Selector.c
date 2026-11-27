#include "main.h"
#include <stdio.h>

/**
 * decimal_detect - detecte decimalium. 
 * @take: - take variable of item.
 */

int decimal_detect(va_list take, int counter)
{
	int n;
	int i; // l'incrémenteur
	int divizoruss; // le diviseur et le modulo
	int zoro = 1; // nombre de chiffre
	
	n = va_arg(take, int);
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	
	if (n > 9)
	{
	for ( divizoruss = 1; n / divizoruss >= 10; divizoruss *= 10)
	{
		zoro++;
	}
	
		for (i = 0; i < zoro; i++)
		{
			_putchar('0' + n / divizoruss);
			n = n % divizoruss;
			divizoruss /= 10;
		}
	}
	else
	{
		_putchar('0' + n);
	}

	return (counter);
}

/**
 * char_detector - detecte decimalium. 
 * @take: - take variable of item.
 */
int char_detector(va_list take, int counter)
{

	return (counter);
}

/**
 * decimal_detect - detecte decimalium. 
 * @take: - take variable of item.
 */
char string_detector(va_list take)
{

}
