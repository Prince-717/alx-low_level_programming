#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print numbers for 1 to 100 and if number is
 * a multiple of 3 print 'Fizz', else if number is
 * if a multiple of 5 print 'Buzz' and for number which
 * are multiples of both 3 and 5 print 'FizzBuzz'.
 *
 * Return: 0 on success.
 */

int main(void)
{
	int n; /* number between 1 and 100 */

	for (n = 1; n <= 100; n++)
	{
		int mod3 = n % 3; /* modulo of n divided by 3 */
		int mod5 = n % 5; /* modulo of n divided by 5 */

		if (mod3 == 0 && mod5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (mod5 == 0)
		{
			printf("Buzz ");
		}
		else if (mod3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");

	return (0);
}
