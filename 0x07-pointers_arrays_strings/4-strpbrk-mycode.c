#include <stdlib.h>
#include <stdio.h>

/**
 * _strpbrk - Function that locates a character in a string.
 *
 * @s: Pointer to string.
 * @accept: Character to be located.
 *
 * Return: Pointer to the first occurence of character c.
 */

char *_strpbrk(char *s, char *accept)
{
	int ls = 0; /* Length of string s points to */
	int la = 0; /* Length of string accept points to */
	int i = 0; /* Loop variable for string that s points to */
	int j = 0; /* Loop variable for string that accept points to */
	/*int o = 0;  Variable to check the occurence of c */

	while (*(s + ls) != '\0')
	{
		ls++;
	}

	while (*(accept + la) != '\0')
	{
		la++;
	}

	while (i < ls)
	{
		while (j < la)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}

		if (s[i] != accept[j - 1] && j == la)
		{
			return (NULL);
		}

		i++;
	}
	return (s);
}
