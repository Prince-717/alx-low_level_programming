/**
 * wildcmp - compares two strings and returns 1 if they identical
 * @s1: pointer to first string
 * @s2: pointer to second string (can contain the special character *)
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		else
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == '\0')
	{
		if (*s2 == '\0')
			return (1);
		else
			return (0);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
