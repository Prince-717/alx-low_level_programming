#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Print traingle
 *
 * @size: Size of triangle
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, ns, nh;

		for (i = 0; i < size; i++)
		{
			ns = size - (i + 1); /* No: of space characters at every sub-iteration*/
			nh = i + 1; /* No: of # characters at every sub-iteration*/

			for (j = 0; j < ns; j++)
			{
				_putchar(' ');
			}

			for (j = 0; j < nh; j++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
