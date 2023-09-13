#include "search_algos.h"

/**
 *linear_search - function that perform a search algorithm
 *@array: a pointer to the first element of the array
 *@size: the number of elements in array
 *@value: the value to search for
 *Return: -1 if value is not present or array is NULL otherwise the index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (!array)
		return (-1);
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
