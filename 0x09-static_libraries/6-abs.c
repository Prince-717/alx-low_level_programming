#include <stdio.h>
#include "main.h"

/**
 * _abs - Compute the absolute value of a number
 *
 * @num : Number that would be turned into its absolute value
 *
 * Return: 0 if Success
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
