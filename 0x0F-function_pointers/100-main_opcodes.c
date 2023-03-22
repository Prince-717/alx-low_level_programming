#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes);

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of command line arguments
 * @argv: an array of command line argument strings
 *
 * Return: 0 on success, 1 if the number of arguments is invalid, 2 if the
 * number of bytes is negative
 */
int main(int argc, char **argv)
{
	int num_bytes = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);

	return (0);
}

/**
 * print_opcodes - prints the opcodes of a function
 * @num_bytes: the number of bytes to print
 */
void print_opcodes(int num_bytes)
{
	int i;
	char *main_ptr = (char *)&main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", main_ptr[i] & 0xff);
	}

	printf("\n");
}
