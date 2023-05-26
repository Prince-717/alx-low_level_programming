#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int mem_count = 0, count2 = 0;

	while (*(dest + mem_count) != '\0')
	{
		mem_count++;
	}

	while (count2 < n)
	{
		*(dest + mem_count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		mem_count++;
		count2++;
	}
	return (dest);
}
