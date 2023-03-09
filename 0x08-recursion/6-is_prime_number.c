#include "main.h"

/**
 * is_prime - Check if a number is prime or not.
 * @n: The number to check.
 * @i: The divisor to check against.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (i == 1)
		return (1);
	else
		return ((n % i == 0) ? 0 : is_prime(n, i - 1));
}

/**
 * is_prime_number - Check if a number is prime or not.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (is_prime(n, n / 2));
}
