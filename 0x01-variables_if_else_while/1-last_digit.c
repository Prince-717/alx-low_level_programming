#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 if program runs successfully
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int l_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	l_n = n % 10;

	if (l_n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l_n);
	}
	else if (l_n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l_n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_n);
	}
	return (0);
}
