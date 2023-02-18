#include <stdio.h>

/**
 * main - Print all base 10 single digits
 *
 * Return: 0 if program runs successfully
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0'); /* Print base 10 number */

		if (i == 9)
		{
			putchar('\n'); /* Print newline when number is 9 */
		}

		i++;
	}

	return (0);
}
