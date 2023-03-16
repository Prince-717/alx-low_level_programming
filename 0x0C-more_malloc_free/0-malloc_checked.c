#include <stdlib.h>
/**
 * malloc_checked - Allocate memory using malloc.
 * @b: Interger parameter.
 * Return: 98 on unsuccessful memory allocation.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(unsigned int));

	if (ptr == NULL)
		exit(98);

	*ptr = b;

	free(ptr);

	return (ptr);
}
