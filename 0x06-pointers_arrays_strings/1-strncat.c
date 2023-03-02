/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
		dest_len++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		dest_len++;
		n--;
	}

	*dest_ptr = '\0';

	return (dest);
}
