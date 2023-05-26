#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *hstk;
	char *pndl;

	while (*haystack != '\0')
	{
		hstk = haystack;
		pndl = needle;

		while (*haystack != '\0' && *pndl != '\0' && *haystack == *pndl)
		{
			haystack++;
			pndl++;
		}
		if (!*pndl)
			return (hstk);
		haystack = hstk + 1;
	}
	return (0);
}
