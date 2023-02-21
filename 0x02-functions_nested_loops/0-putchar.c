#include "main.h"
#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: 0 if Success
 */
int main(void)
{
	char p[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		char c = p[i];

		_putchar(c);

		if (i == 7)
		{
			c = '\n';
			_putchar(c);
		}
	}

	return (0);
}
