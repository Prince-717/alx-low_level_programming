#include <stdio.h>
#include "main.h"
/**
 * times_table - Print the 9 times table
 */
void times_table(void)
{
	int k, n, r, fd, ld;

	for (k = 0; k < 10; k++)
	{
		for (n = 0; n < 10; n++)
		{
			r = k * n;
			fd = r / 10; /* 1st digit of r */
			ld = r % 10; /* last digit of r */

			if (r > 9)
			{
				_putchar(fd + '0');
				_putchar(ld + '0');
			}
			else
			{
				_putchar(r + '0');
			}
			if (n < 9)
			{
				_putchar(',');
				if (r > 9)
				{
					_putchar(' ');
				}
				if (r <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
