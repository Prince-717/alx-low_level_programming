
int _strlen_recursion(char *s);

int _palindrome_helper(char *s, int i, int j);

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: pointer to the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	return (_palindrome_helper(s, 0, len - 1));
}

/**
 * _palindrome_helper - helper function to check if a string is a palindrome
 *
 * @s: pointer to the string to check
 * @i: start index of the string to check
 * @j: end index of the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int _palindrome_helper(char *s, int i, int j)
{
	if (i >= j)
		return (1);

	if (s[i] != s[j])
		return (0);
	return (_palindrome_helper(s, i + 1, j - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: pointer to the string to get the length of
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
