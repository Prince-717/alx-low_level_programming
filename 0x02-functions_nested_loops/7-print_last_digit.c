#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 *
 * @num : Number whose last digit is to be found
 *
 * Return: 0 if Success
 */

int print_last_digit(int num)
{
	int n = (num % 10);

	_putchar(n);
}
