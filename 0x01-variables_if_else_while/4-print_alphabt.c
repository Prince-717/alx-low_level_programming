#include <stdio.h>

/**
 * main - Prints all lowercase alphabets except 'e' and 'q'.
 *
 * Return: 0 when program runs successfully
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			char ch  = (char)i; /* Change ascii code to alphabet */

			putchar(ch); /* Print the alphabet */

			if (i == 122)
			{
				putchar('\n');
			}
		}

		i++;
	}

	return (0);
}
