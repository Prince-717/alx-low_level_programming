#include <stdlib.h>

/**
 * argstostr - Concatenate all arguments of your program.
 *
 * @ac: First parameter.
 * @av: Second parameter.
 * 
 * Return: Pointer to calling function.
 */

char *argstostr(int ac, char **av)
{
	 int  i = 0;
	 int l, j;
	 char **arg;

	 if (av == NULL || ac == 0)
	 {
		 return (NULL);
	 }

	 arg = malloc(sizeof(char *) * ac);

	 if (arg == NULL)
		 return (NULL);

	 while (i < ac)
	 {
		 l = 0;

		 while (av[i][l] != '\0')
			 l++;

		 l = l + 2;

		 arg[i] = malloc(sizeof(char) * l);

		 if (arg[i] == NULL)
			 free(arg[i]);
		 free(arg);

		 for (j = 0; j < (l - 2); j++)
		 {
			 arg[i][j] = av[i][j];
		 }

		 arg[i][j] = '\n';
		 arg[i][j + 1] = '\0';

		 i++;
	 }

	 return (arg);
}
