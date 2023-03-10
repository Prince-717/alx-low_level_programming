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
	int i;
	int sum = 0;
	int asci;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		asci = (int) *argv[i];

		if (asci < 48 || asci > 57)
		{
			printf("Error\n");

			return (1);

			break;
		}

		sum += atoi(argv[i]);

	}

	if (i == argc && argc > 1)
	{
		printf("%d\n", sum);
	}

	return (0);
}
