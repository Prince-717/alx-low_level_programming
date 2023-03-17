#include <stdlib.h>

/**
 * _realloc - Reallocate memory block using malloc and free
 * @ptr: Pointer to memory previously allocated with malloc(old_size)
 * @old_size: Size, in bytes, of the allocated space for ptr
 * @new_size: New size, in bytes, of the new memory block
 *
 * Return: Pointer to reallocated memory block, or NULL if memory allocation fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
	{
		new_ptr = malloc(new_size);
		if (!new_ptr)
			return (NULL);
		return (new_ptr);
	}

	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	old_ptr = ptr;
	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = old_ptr[i];

	free(ptr);
	return (new_ptr);
}
