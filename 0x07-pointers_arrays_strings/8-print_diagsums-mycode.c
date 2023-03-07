#include <stdlib.h>
#include <stdio.h>

/**
 * print_diagsums - Print sum of diagonals of square matrix.
 * @a: pointer to an integer
 * @size: Size of square matrix.
 */

void print_diagsums(int *a, int size)
{
	int i = 0; /* row and column index of 1st diagonal array elements */
	int j = size - 1; /* column index of 2nd diagonal array elements */
	int sum1 = 0; /* sum of 1st diagonal of matrix */
	int sum2 = 0; /* sum of 2nd diagonal of matrix */

	while (i < size)
	{
		sum1 += a[i][i];
		sum2 += a[i][j];

		i++;

		j--;
	}

	printf("%d, %d", sum1, sum2);
}
