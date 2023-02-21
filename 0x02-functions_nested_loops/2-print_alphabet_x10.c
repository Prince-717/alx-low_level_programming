#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print alphabets 10 times
 */

void print_alphabet_x10(void)
{
	char p[] = "abcdefghijklmnopqrstuvwxyz";
	int j = 0;
	char c;

	while (j < 10)
	{
		int i = 0;

		while (i < 26) /* Loop that prints the alphabets */
		{
			c = p[i]; /* Assign a letter to c after every iteration */
			_putchar(c); /* Print each letter for every iteration */

			if (i == 25)
			{
				c = '\n'; /* Add a newline if letter = z */
				_putchar(c);
			}

			i++;
		}

		j++;
	}
}
