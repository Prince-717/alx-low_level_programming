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

	ptr = malloc(size * sizeof(char));

	while (i < size)
	{
		if (size == 0)
		{
			return (NULL);
		}
		else
		{
			ptr[i] = c;
		}

		i++;
	}

	return (ptr);
}
