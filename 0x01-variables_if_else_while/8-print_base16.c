#include <stdio.h>

/**
 * main - Print all numbers of base 16
 *
 * Return: 0 if program runs successfully
 */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		putchar(i + '0');

		i++;
	}

	while (j < 6)
	{
		putchar(j + 'a');

		if (j == 5)
		{
			putchar('\n');
		}

		j++;
	}

	return (0);
}
