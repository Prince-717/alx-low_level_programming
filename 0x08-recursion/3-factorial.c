#include "main.h"

/**
 * factorial - Return the factorial of a given number
 *
 * @n: Number whose facotorial is to be computed
 *
 * Return: factorial
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
