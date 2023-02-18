#include <stdio.h>

/**
 * main - Print all possible combinations of single-git numbers
 *
 * Return: 0 if program runs successfully
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
		i++;
	}
	return (0);
}
