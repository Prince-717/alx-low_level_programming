#include "hash_tables.h"

/**
 * hash_djb2 - function that generates a random number through
 * a string given (hasht number)
 *
 * @str: string
 * Return: hasht number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hasht;
	int count;

	hasht = 5381;
	while ((count = *str++))
	{
		hasht = ((hasht << 5) + hasht) + count; /* hasht * 33 + count */
	}
	return (hasht);
}
