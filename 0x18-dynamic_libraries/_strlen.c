#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int mem_count = 0;

	while (*(s + mem_count) != '\0')
		mem_count++;
	return (mem_count);
}
