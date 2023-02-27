#include <stdio.h>
#include "main.h"

/**
 * print_rev - Write a function that prints a string in reverse
 *
 * @s: Parameter
 */

void print_rev(char *s)
{
	int i = 0;
	int li; /* Index of '\0' character in the string */

	while (s[i] != '\0')
	{
		i++;
	}

	li = i + 1;

	while (li >= 0)
	{
		_putchar(s[li]);

		li--;
	}

	_putchar('\n'); /* Print new line */
}
