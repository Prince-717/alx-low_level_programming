#include <stdlib.h>

/**
 * create_array - Create and array of characters and initialize it.
 *
 * @size: size of array.
 * @c: character.
 *
 * Return: Pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char)); /* allocate memory with malloc */

	if (ptr == NULL) /* return null if memory allocationis invalid */
	{
		return (NULL);
	}

	while (i < size)
	{
		ptr[i] = c;

		i++;
	}

	return (ptr);
}
