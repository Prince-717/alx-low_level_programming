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
	int j = 65;

	while (i < 123)
	{
		char ch = (char)i; /* Convert ascii code to lower case alphabet */

		putchar(ch); /* Print character matching ascii code */
		i++;
	}

	while (j < 91)
	{
		char cj = (char)j; /* Convert ascii code to upper case alphabet */

		putchar(cj); /* Print character matching ascii code */

		if (j == 90)
		{
			putchar('\n');
		}
		j++;
	}

	return (0);
}
