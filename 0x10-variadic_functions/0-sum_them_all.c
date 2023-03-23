#include <stdarg.h>

/**
 * sum_them_all - Sum all the integer arguments of a function.
 *
 * @n: Number of integers to be summed.
 *
 * Return: Sum of integer arguments.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	const unsigned int *p = &n;
	int numb = *p;
	int sum = 0, i;

	if (n == 0)
		return (0);

	va_start(num, n);

	for (i = 0; i < numb; i++)
	{
		sum += va_arg(num, int);
	}

	va_end(num);

	return (sum);
}
