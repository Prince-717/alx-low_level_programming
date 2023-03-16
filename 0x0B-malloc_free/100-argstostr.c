#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: the array of arguments
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* Calculate the total length of the arguments */
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			len++;
			total_len++;
		}
		total_len++; /* for the newline character */
	}
	/* Allocate memory for the concatenated string */
	str = malloc((total_len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);
	/* Concatenate the arguments */

	len = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[len] = av[i][j];
			len++;
		}
		str[len] = '\n';
		len++;
	}
	str[len] = '\0';
	return (str);
}
