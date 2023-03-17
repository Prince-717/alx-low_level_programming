#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, 98 if error
 */
int main(int argc, char *argv[])
{
	int i, j, len1, len2, *result;
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	len1 = 0;
	while (argv[1][len1])
	{
		if (argv[1][len1] < '0' || argv[1][len1] > '9')
		{
			printf("Error\n");
			return (98);
		}
		len1++;
	}
	len2 = 0;
	while (argv[2][len2])
	{
		if (argv[2][len2] < '0' || argv[2][len2] > '9')
		{
			printf("Error\n");
			return (98);
		}
		len2++;
	}
	result = calloc(len1 + len2, sizeof(*result));
	if (!result)
		return (1);

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			result[i + j + 1] += (argv[1][i] - '0') * (argv[2][j] - '0');
			result[i + j] += result[i + j + 1] / 10;
			result[i + j + 1] %= 10;
		}
	}
	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;
	while (i < len1 + len2)
	{
		printf("%d", result[i]);
		i++;
	}
	printf("\n");
	free(result);
	return (0);
}
