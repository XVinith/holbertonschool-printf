#include "main.h"
#include <stdio.h>

/**
 * decimal_detect - detecte decimalium. 
 * @take: - take variable of item.
 */

int decimal_detect(va_list take, int counter)
{
	int n, i;
	int divizoruss = 10; // le diviseur et le modulo
	int zoro = 1; // nombre de chiffre
	
	n = va_arg(take, int);
	for (i = 0; i < zoro; i++)
	{
		_putchar('0' + n / divizoruss);
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
