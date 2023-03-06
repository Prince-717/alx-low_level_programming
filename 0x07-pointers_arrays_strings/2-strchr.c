#include <stddef.h>

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
	int l = 0; /* Length of string s points to */
	int i = 0; /* Variable to loop through string */
	int o = 0; /* Variable to check the occurence of c */

	while (*(s + l) != '\0')
	{
		l++;
	}

	while (i < l)
	{
		if (*(s + i) == c && o < 1)
		{
			o++;
			return (&s[i]);

		}

		if (*(s + i) != c && i == l - 1)
		{
			return (NULL);
		}

		i++;
	}

	return (s);
}
