#include <stdlib.h>
/**
 * string_nconcat - Concatenate two strings.
 * @s1: Address of string one.
 * @s2: Address of string two.
 * @n: First n bytes of s2.
 * Return: Concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l = 0; /* Length of concatenated string */
	unsigned int l1 = 0; /* Length of S1 */
	unsigned int l2 = 0; /* Length of S2 */
	unsigned int i = 0;
	unsigned int j = 0;
	char *str;

	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
		s2[0] = '\0';
	while (s1[l1] != '\0')
		l1++; /* Length of S1 excluding '\0' */
	while (s2[l2] != '\0')
		l2++; /* Length of S2 excluding '\0' */
	if (n >= (l2 + 1))
		l = l1 + l2 + 1;
	else
		l = l1 + n + 1;
	str = malloc(sizeof(unsigned int) * l);
	if (str == NULL)
		return (NULL);
	while (i < l1)
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (i < (l - 1))
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
