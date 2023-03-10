/**
 * _memcpy - Copy memory area.
 *
 * @dest: Memory address of where bytes would be copied to.
 * @src: Memory address of where bytes would be copied from.
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);

		i++;
	}

	return (dest);
}
