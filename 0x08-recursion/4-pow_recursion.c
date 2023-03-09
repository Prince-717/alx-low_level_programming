/**
 * _pow_recursion - Return the value of x raised to the power of y.
 * @x: x parameter
 * @y: y parameter
 * Return: -1 if y < 0 otherwise return x
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion((x), y - 1));
	}
}
