#include <stdlib.h>
#include <stdio.h>

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
	if (argc == 3)
	{
		int mult = atoi(argv[argc - 2]) * atoi(argv[argc - 1]);

		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
