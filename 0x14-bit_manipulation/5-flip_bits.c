#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - return the number of bits
 * @n: number
 * @m: number to compare with n
 *
 * Return: the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int dif;

	dif = n ^ m;

	for (; dif > 0;)
	{
		if (dif & 1)
			i++;
		dif >>= 1;
	}
	return (i);
}
