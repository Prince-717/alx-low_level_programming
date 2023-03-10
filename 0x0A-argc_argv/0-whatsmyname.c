#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for program that prints its name.
 *
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments passed to the program.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
