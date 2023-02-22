#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print all natural numbers from n to 98
 *
 * @n : Argument of the function
 *
 * Return: 0 if success
 */

void print_to_98(int n)
{
	while ( n != 99)
	{
		if (n < 98)
		{
			_putchar(n);
			n++
		}
		else if (n == 98)
		{
			_putchar(n);
		}
		else
		{
			_putchar(n);
			n--;
		}
	}
}
