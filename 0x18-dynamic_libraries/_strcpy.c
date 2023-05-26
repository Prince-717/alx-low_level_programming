#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int mem_count = 0;

	while (mem_count >= 0)
	{
		*(dest + mem_count) = *(src + mem_count);
		if (*(src + mem_count) == '\0')
			break;
		mem_count++;
	}
	return (dest);
}
