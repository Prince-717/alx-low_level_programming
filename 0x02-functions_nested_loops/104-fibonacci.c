#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int num1 = 1, num2 = 2, sum = 0;
	int count;

	printf("%lu, %lu", num1, num2);

	for (count = 3; count <= 98; count++)
	{
		sum = num1 + num2;
		printf(", %lu", sum);
		num1 = num2;
		num2 = sum;
	}

	printf("\n");

	return (0);
}
