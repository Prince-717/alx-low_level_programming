#include <stdio.h>
#include "main.h"

/**
 * times_table - Print 9 times table
 */

void times_table(void)
{
	int k, n;

	for (k = 0; k < 10; k++)
	{
		for (n = 0; n < 10; n++)
		{
			int r = k * n;
			int fd = r / 10;
			int ld = r % 10;

			if (r < 10) /* if r is a single digit number */
			{
				_putchar(r + '0');
			}
			else /* if r is double digit number */
			{
				_putchar(fd + '0');
				_putchar(ld + '0');
			}
			if (n < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
