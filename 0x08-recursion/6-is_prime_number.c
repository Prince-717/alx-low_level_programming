/**
 * is_prime_number - Return 1 if input is prime number.
 *
 * @n: Input integer parameter.
 *
 * Return: 1 if input is prime else 0 if otherwise.
 */

int is_prime_number(int n)
{
	if (n % 2 != 0)
	{
		return (1);
	}
	else
	{
		return (0 * is_prime_number(n + 1));
	}
}
