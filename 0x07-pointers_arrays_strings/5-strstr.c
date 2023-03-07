#include <stdlib>

/**
 * _strstr - Locates a substring.
 *
 * @haystack: Pointer to the string to search in.
 * @needle: Pointer to the substring to search for.
 *
 * Return: A pointer to the beginning of the located substring, or NULL if
 *         the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;

		while (*b == *haystack && *b != '\0' && *haystack != '\0')
		{
			haystack++;
			b++;
		}

		if (*b == '\0')
			return (a);

		haystack = a + 1;
	}

	return (NULL);
}
