#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10
 *
 * Return: 0 if program runs successfully
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		char ch = (char)i; /* Change ascii code to number */

		putchar(ch); /* Print number */

		if (i == 57)
		{
			putchar('\n');
		}

		i++;
	}

	return (0);
}
