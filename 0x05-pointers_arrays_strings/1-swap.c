#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swap the values of two integers
 *@a: first integer parameter
 *@b: second integer parameter
 */

void swap_int(int *a, int *b)
{
	int na, nb;

	na = *a;
	nb = *b;

	*a = nb;
	*b = na;
}
