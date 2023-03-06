/**
 * _strspn - Get the length of a prefix substring.
 *
 * @s: Initial segment.
 * @accept: Pointer to string.
 *
 * Return: Number of bytes in initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	int ls = 0; /* length of string s points to */
	int la = 0; /* length of string accept points to */
	int i = 0; /* looping variable for characters in string s points*/
	int j; /* looping variable for character in string accept points to */
	unsigned int len = 0; /* length of initial segment */
	int l;

	while (*(s + ls) != '\0')
	{
		ls++;
	}

	while (accept[la] != '\0')
	{
		la++;
	}

	while (i < ls)
	{
		j = 0;

		while (j < la)
		{
			if (s[i] == *(accept + j))
			{
				len++; /* length of initial segment of s */
			}
			j++;
		}

		i++;
		l = len;

		if (l < i)
		{
			break;
		}
	}
	return (len);
}
