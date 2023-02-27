#include <stdio.h>
#include "main.h"

#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the first element of the array.
 * @n: Number of elements to print.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1) /* Don't print comma after last element */
			printf(", ");
	}
	printf("\n");
}
