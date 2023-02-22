#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - Print all natural numbers from n to 98
 *
 * @n : Argument of the function
 *
 * Return: 0 if success
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n < 99)
	{
		while (n < 99)
		{
			printf("%d, ", n);

			if (n == 98)
			{
				printf("%d\n", n);
			}

			n++;
		}
	}
	else
	{
		printf("%d, ", n);

		if (n == 98)
		{
			printf("%d\n", n);
		}

		n--;
	}
}
