#include <stdio.h>
#include "main.h"

/**
 * _isupper - Check for uppercase character
 * 
 * Return: 0 on Success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}

	return (0);
}
