#include <stdlib.h>

/**
 * int_index - Return the index of array element that satifies a condition.
 *
 *
 * @array: Array of elements.
 * @size: Size of array.
 * @cmp: Pointer to function.
 *
 * Return: Index of the array element that satisfies condition.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size < 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) > 0)
			return (i);
		i++;
	}

	return (-1);
}
