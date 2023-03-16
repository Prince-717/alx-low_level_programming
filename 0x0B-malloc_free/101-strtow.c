#include "main.h"
#include <stdlib.h>
/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	/* Count the number of words in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			word_count++;
	}
	/* Allocate memory for the words array */
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	/* Extract the words from the string */
	i = 0;
	while (*str != '\0')
	{
		while (*str == ' ')
			str++;
		if (*str == '\0')
			break;
		len = 0;
		while (str[len] != ' ' && str[len] != '\0')
			len++;
		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (k = 0; k < len; k++)
			words[i][k] = str[k];
		words[i][k] = '\0';
		i++;
		str += len;
	}
	words[i] = NULL;
	return (words);
}
