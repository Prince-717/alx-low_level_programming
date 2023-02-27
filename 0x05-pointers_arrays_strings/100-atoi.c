#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int value = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			value = value * 10 + (*s - '0');
			if (*(s + 1) < '0' || *(s + 1) > '9')
				break;
		}

		s++;
	}

	return (value * sign);
}
