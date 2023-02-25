#include <unistd.h>

/**
 * main - Entry point of program
 *
 * Return: 1 on Success
 */

int main(void)
{
	char word[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, word, sizeof(word) - 1);

	return (1);
}
