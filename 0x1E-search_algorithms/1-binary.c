#include "search_algos.h"

/**
 *binary_search - function of binary search for value in a sorted array of int
 *@array: pointer to the first element of the array to search in
 *@size: number of element in the array
 *@value: value to search for
 *Return: -1 if value is not present or an array is NULL, otherwose the index
 */
int binary_search(int *array, size_t size, int value)
{
	int r = size - 1;
	int l = 0;
	int m;

	if (!array)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (m = l; m < r; m++)
			printf("%d, ", array[m]);
		printf("%d\n", array[m]);
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
		}
	return (-1);
}
