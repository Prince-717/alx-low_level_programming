#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints alphabets followed by newline
 */

void print_alphabet(void)
{
	char p[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int c;

	while (i < 26)
	{
		c = p[i];
		_putchar(c);

		if (i == 25)
		{
			c = '\n';
			_putchar(c);
		}

		i++;
	}
}
