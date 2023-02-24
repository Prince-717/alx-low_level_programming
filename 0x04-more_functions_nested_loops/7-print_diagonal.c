#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 *
 * @n: Number of times '\' is printed
 */

void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar(92);
		_putchar('\n');

		n--;
	}

	_putchar('\n');
}
