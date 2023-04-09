#include <stdlib.h>

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *ptr = (char *)&j;

	if (*ptr)
		return (1);
	else
		return (0);
}
