#include <stdlib.h>
#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: The number to check the bit in
 * @index: The index of the bit to check
 *
 * Return: The value of the bit at index index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	if (index >= sizeof(n) * 8)
		return (-1);

	a = (n >> index) & 1;
	
	return (a);
}
