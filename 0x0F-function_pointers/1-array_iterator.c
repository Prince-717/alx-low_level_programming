#include <stdlib.h>

/**
 * array_iterator - Executes a function on an array with pointer to function.
 *
 * @array: Array definition.
 * @size: Size of array.
 * @action: Pointer to function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);

		i++;
	}
}
