#include <stdio.h>
#include "main.h"

/**
 * _puts - Print a string followed by a newline
 *
 * @str: parameter
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		i++;
	}
	_putchar('\n');
}
