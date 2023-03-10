#include <stdio.h>
# include "main.h"

/**
 * _islower - Check for lower case character
 *
 * @c: character to be checked
 *
 * Return: 0 if Success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
