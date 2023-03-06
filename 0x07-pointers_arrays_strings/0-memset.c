
/**
 * _memset - Fill memory with constant byte.
 *
 * @s: Pointer to array
 * @b: Constant byte to be filled in memory
 * @n: First bytes of the memory area
 *
 * Return: Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;

		i++;
	}

	return (s);
}
