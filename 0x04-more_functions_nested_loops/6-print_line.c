#include <stdio.h>
#include "main.h"

/**
 * print_line - Draw line in the terminal
 *
 * @n: number of underscores
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');

		n--;
	}

	_putchar('\n');
}
