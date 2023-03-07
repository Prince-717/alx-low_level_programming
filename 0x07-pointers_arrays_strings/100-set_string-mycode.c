/**
 * set_string - Set the value of a pointer to a string.
 *
 * @s: pointer to pointer
 * @to: pointer
 */

void set_string(char **s, char *to)
{
	int ls = 0;
	int i = 0;

	while (**(s + ls) != '\0')
	{
		ls++;
	}

	while (i <= ls)
	{
		to[i] = **(s + i);

		i++;
	}

}
