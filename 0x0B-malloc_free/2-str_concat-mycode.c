#include <stdlib.h>
/**
 * str_concat - Concatenate two strings.
 * @s1: First string.
 * @s2: Second string.
 * Return: Pointer to concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2, l;
	int i = 0;
	int j = 0;
	char *str;

	if (s1 == NULL || s2 == NULL)
	{
		s1[0] = '\0';
		s2[0] = '\0';
	}
	for (l1 = 1; s1[l1] != '\0'; l1++)
		l1++;
	for (l2 = 1; s2[l2] != '\0'; l2++)
		l2++;
	l = l1 + l2;

	str = malloc(sizeof(char) * l);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		if (s1[i] != '\0')
			str[i] = s1[i];
		else
		{
			str[i] = s2[j];
			j++;
		}
	}
	return (str);
}
