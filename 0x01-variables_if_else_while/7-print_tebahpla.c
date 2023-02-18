#include <stdio.h>

/**
 * main - Print lower case alphabets in reverse
 *
 * Return: 0 if program runs successfully
 */
int main(void)
{
	int i = 25;

	while (i >= 0)
	{
		putchar(i + 'a'); /* Print alphabets in reverse order */

		if (i == 0)
		{
			putchar('\n');
		}

		i--;

	}
	return (0);
}
