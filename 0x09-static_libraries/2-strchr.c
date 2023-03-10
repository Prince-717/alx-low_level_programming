#include <stdlib.h>
/**
 * _strchr - Function that locates a character in a string.
 *
 * @s: Pointer to string.
 * @c: Character to be located.
 *
 * Return: Pointer to the first occurence of character c.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
