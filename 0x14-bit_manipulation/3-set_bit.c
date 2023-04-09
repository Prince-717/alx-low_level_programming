#include  <stdlib.h>
#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: number
 *
 * @index: index of the bit to set.
 *
 * Return: 1 if it worked else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int a;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}

	a = 1 << index;

	*n |= a;

	return (1);
}
