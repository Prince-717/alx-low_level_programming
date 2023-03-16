#include <stdlib.h>
/**
 * malloc_checked - Allocate memory using malloc.
 * @b: Interger parameter.
 * Return: 98 on unsuccessful memory allocation.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
