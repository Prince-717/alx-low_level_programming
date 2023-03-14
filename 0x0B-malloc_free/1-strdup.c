#include <stdlib.h>

/**
 * _strdup - Return a pointer to a newly allocated space in memory.
 *
 * @str: pointer to a string.
 *
 * Return: pointer to newly allocated memory space.
 */

char *_strdup(char *str)
{
	int l = 0;
	int i = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[l] != '\0')
	{
		l++;
	}

	ptr = malloc(sizeof(char) * l);

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i <= l)
	{
		*(ptr + i) = *(str + i);

		i++;
	}

	return (ptr);
}



