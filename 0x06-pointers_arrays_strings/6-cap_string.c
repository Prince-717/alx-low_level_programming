/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 *
 * Return: pointer to the capitalized string
 */
char *cap_string(char *s)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;
		if (strchr(separators, s[i]) && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			s[i + 1] -= 32;
	}
	return (s);
}
