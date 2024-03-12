#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: string that holds name
 * @f: points to the function that prints
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
