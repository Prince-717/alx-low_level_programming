#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print first 50 Fibonacci numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	long a, b, i, fnum;

	a = 1; /* First Fibonacci number */
	b = 2; /* Second Fibonacci number */

	printf("%ld, ", a);
	printf("%ld, ", b);

	for (i = 2; i < 50; i++)
	{
		fnum = a + b; /* Fibonacci number = some of 2 preceding numbers*/

		if (i < 49)
		{
			printf("%ld, ", fnum);
		}
		else
		{
			printf("%ld\n", fnum); /* Print newline at the end of numbers*/
		}

		a = b;
		b = fnum;
	}
	return (0);
}
