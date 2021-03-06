#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Print a name
 * @name: name
 * @f: ponter to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	if (f == NULL)
		return;

	f(name);
}
