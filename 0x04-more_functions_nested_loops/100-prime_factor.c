#include <stdio.h>
#include <math.h>

/**
 * main - Print largerst prime factor of number
 *
 * Return: 0 on Success
 */

int main(void)
{
	long int n = 612852475143;
	long int factor = 2;
	long int largest_factor;

	while (n > 1)
	{
		if (n % factor == 0)
		{
			largest_factor = factor;
			n /= factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%ld\n", largest_factor);
	return (0);
}
