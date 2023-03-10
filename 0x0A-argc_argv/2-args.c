#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for program.
 *
 * @argc: Number of arguments.
 * @argv: Array of argumnets.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);

		i++;
	}

	return (0);
}
