#include <stdio.h>

/**
 * _isdigit - Checks for a digit
 *
 * @c: Character being checked
 *
 * Return: 0 on success
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
