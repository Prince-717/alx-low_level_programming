#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print stings followed by a new line.
 *
 * @separator: String to be printed between strings.
 * @n: Number of strings passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	const unsigned int *p = &n;
	int num = *p, i;
	va_list args;

	va_start(args, n);

	if (separator != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (i < (num - 1))
				printf("%d%s", va_arg(args, int), separator);
			else
				printf("%d\n", va_arg(args, int));
		}
	}

	va_end(args);
}
