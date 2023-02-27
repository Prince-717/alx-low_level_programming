#include <stdio.h>
#include "main.h"

/**
 * rev_string - Write a function that prints a string in reverse
 *
 * @s: Parameter
 */

void rev_string(char *s)
{
	int i = 0;
	int li; /* Index of '\0' character in the string */

	while (s[i] != '\0')
	{
		i++;
	}

	printf("length = %d", i);

	while (li >= 0)
	{
		_putchar(s[li]);

		li--;
	}

	_putchar('\n'); /* Print new line */
}
