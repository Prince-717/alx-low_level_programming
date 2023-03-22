#include <stdlib.h>

/**
 * print_name - Print the name of a function using function pointer.
 *
 * @name: Pointer to name.
 * @f: Function argument.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
