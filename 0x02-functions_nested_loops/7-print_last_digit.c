#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 *
 * @r : Number whose last digit is to be found
 *
 * Return: r if Success
 */

int print_last_digit(int r)
{
	if (r < 0)
	{
		r = -r;

		r = r % 10;

		_putchar(r + '0');

		return (r);
	}
	else
	{
		r = r % 10;

		_putchar(r + '0');

		return (r);
	}

}
