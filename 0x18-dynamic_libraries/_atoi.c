#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int mem_count = 0, span = 0, out_in = 0, pin = 1, mark = 1, i;

	while (*(s + mem_count) != '\0')
	{
		if (span > 0 && (*(s + mem_count) < '0' || *(s + mem_count) > '9'))
			break;

		if (*(s + mem_count) == '-')
			pin *= -1;

		if ((*(s + mem_count) >= '0') && (*(s + mem_count) <= '9'))
		{
			if (span > 0)
				mark *= 10;
			span++;
		}
		mem_count++;
	}

	for (i = mem_count - span; i < mem_count; i++)
	{
		out_in = out_in + ((*(s + i) - 48) * mark);
		mark /= 10;
	}
	return (out_in * pin);
}
