#include "main.h"

/**
 * find_sqrt - Find the natural square root of a number recursively
 *
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 *
 * Return: The natural square root of n, or -1 if n doesn't have one
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess > n)
	{
		return (-1);
	}
	if (guess * guess == n)
	{
		return (guess);
	}
	return (find_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - Find the natural square root of a number using recursion
 *
 * @n: The number to find the square root of
 *
 * Return: The natural square root of n, or -1 if n doesn't have one
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 0));
}

