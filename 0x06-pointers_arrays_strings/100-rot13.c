/**
 * rot13 - Encode a string using the rot13 cipher
 *
 * @str: The string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *str)
{
	char *s = str;

	while (*s)
	{
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
				*s += 13;
			else
				*s -= 13;
		}
		s++;
	}

	return (str);
}
