#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * @s: A pointer to the string to be reversed.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (j = 0; s[j] != '\0'; j++)
	{
	}

	j--;

	for (i = 0; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
