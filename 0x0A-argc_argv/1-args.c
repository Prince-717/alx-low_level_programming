#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for program.
 *
 * @argc: Number of program arguments.
 * @argv: Array containing program arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%d\n", argc - 1);
	}

	else
	{
		printf("%s", argv[0]);
	}

	return (0);
}
