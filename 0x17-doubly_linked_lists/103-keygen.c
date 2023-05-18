#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * find_largest - find largest number
 *
 * @username: username
 * @length: length of username
 * Return: the largest number
 */
int find_largest(char *username, int length)
{
	int current;
	int largest;
	unsigned int rand_num;

	current = *username;
	largest = 0;

	while (largest < length)
	{
		if (current < username[largest])
			current = username[largest];
		largest += 1;
	}

	srand(current ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * multiply_chars - multiplyeach character of username
 *
 * @username: username
 * @length: length of username
 * Return: multiplied character
 */
int multiply_chars(char *username, int length)
{
	int current;
	int result;

	current = result = 0;

	while (result < length)
	{
		current = current + username[result] * username[result];
		result += 1;
	}

	return (((unsigned int)current ^ 239) & 63);
}

/**
 * generate_random_char - generate a random character
 *
 * @username: username
 * Return: a random character
 */
int generate_random_char(char *username)
{
	int current;
	int result;

	current = result = 0;

	while (result < *username)
	{
		current = rand();
		result += 1;
	}

	return (((unsigned int)current ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int length, current, result;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (length = 0; argv[1][length]; length++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alph)[(length ^ 59) & 63];
	/* ----------- f2 ----------- */
	current = result = 0;
	while (result < length)
	{
		current = current + argv[1][result];
		result = result + 1;
	}
	keygen[1] = ((char *)alph)[(current ^ 79) & 63];
	/* ----------- f3 ----------- */
	current = 1;
	result = 0;
	while (result < length)
	{
		current = argv[1][result] * current;
		result = result + 1;
	}
	keygen[2] = ((char *)alph)[(current ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alph)[find_largest(argv[1], length)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[multiply_chars(argv[1], length)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[generate_random_char(argv[1])];
	keygen[6] = '\0';
	for (current = 0; keygen[current]; current++)
		printf("%c", keygen[current]);
	return (0);
}
