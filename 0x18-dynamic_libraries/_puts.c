#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	int mem_count = 0;

	while (mem_count >= 0)
	{
		if (str[mem_count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[mem_count]);
		mem_count++;
	}
}
