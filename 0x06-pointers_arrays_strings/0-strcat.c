#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string to concatenate to.
 * @src: Source string to concatenate from.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *d_end = dest;

	while (*d_end != '\0')
	{
		d_end++;
	}
	while (*src != '\0')
	{
		*(d_end++) = *(src++);
	}

	*d_end = '\0';

	return (dest);
}
