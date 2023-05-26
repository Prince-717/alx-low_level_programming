#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int mem_count = 0, count2 = 0;

	while (*(dest + mem_count) != '\0')
	{
		mem_count++;
	}

	while (count2 >= 0)
	{
		*(dest + mem_count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		mem_count++;
		count2++;
	}
	return (dest);
}
