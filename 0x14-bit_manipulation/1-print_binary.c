#include <stdlib.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit = 1, bit_mask;
	int len = 0;

	bit_mask = n;
	while (bit_mask > 0)
	{
		len++;
		bit_mask >>= 1;
	}

	len--;

	if (len > 0)
		bit <<= len;

	while (bit > 0)
	{
		if (n & bit)
			_putchar('1');
		else
			_putchar('0');
		bit >>= 1;
	}
}
