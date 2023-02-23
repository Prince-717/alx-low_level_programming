#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print first 50 Fibonacci numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	long a, b, fnum, mod2, sum;

	a = 1; /* First Fibonacci number */
	b = 2; /* Second Fibonacci number */
	mod2 = b % 2; /* Even Fibonacci number check */
	sum = b; /* Initializing sum of even numbers */

	do {
		fnum = a + b; /* Fibonacci number = some of 2 preceding numbers*/
		mod2 = fnum % 2; /* Check if Fibonacci number is even */

		if (mod2 == 0)
		{
			sum += fnum;/*Check even fibonacci numbers and keep summing them*/
		}

		a = b;
		b = fnum;
	} while (fnum <= 4000000);

	printf("%ld\n", sum);/*Print sum of all even fibonacci numbers <= 4000000*/

	return (0);
}
