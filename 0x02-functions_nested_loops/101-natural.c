#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the some of all multiples of 3 and 5 below 1024
 *
 * Return: 0 if success
 */

int main(void)
{
	int n; /* Natural numbers below 1024 */
	int mod3; /* Modulo of natural number divided by 3 */
	int mod5; /* Modulo of natural number divided by 5 */
	int sum = 0; /* Sum of all the multiples of 3 or 5 below 1024 */

	for (n = 0; n < 1024; n++)
	{
		mod3 = n % 3;
		mod5 = n % 5;

		if (mod3 == 0 || mod5 == 0) /* Check if number is a multiple of 3 or 5 */
		{
			sum += n;
		}
	}

	printf("%d is the sum of all multiples of 3 or 5 below 1024.\n", sum);

	return (0);
}
