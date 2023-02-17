#include <stdio.h>

/**
 * main - Entry point for program
 *
 * Return: 0 if program runs succesfully
 */

/* Set the loop variable to the ascii code of 'a'*/
int main(void)
{
	int i = 97;

	while (i < 123)
	{
	char ch = (char)i; /* Convert ascii code to character */

	putchar(ch); /* Print character matching ascii code */

	if (i == 122)
	{
	putchar('\n');
	}

	i++;

	}
	return (0);
}
