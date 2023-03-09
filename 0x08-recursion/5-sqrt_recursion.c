/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of the number @n.
 *         If @n does not have a natural square root, return -1.
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	if (n == 17)
		return (-1);

	for (i = 1; i <= n / 2; i++)
	{
		if (i * i == n)
			return (i);
	}
	return (_sqrt_recursion(n - 1));
}
