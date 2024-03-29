#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: the minimum value of the range.
 * @max: the maximum value of the range.
 *
 * Return: a pointer to the newly created array, or NULL if an error occurred.
 */
int *array_range(int min, int max)
{
	int i;
	int *arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	if (min > max)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		arr[i] = min + i;

	return (arr);
}
