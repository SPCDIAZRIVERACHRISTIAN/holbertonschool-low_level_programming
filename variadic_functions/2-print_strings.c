#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @n: number of strings
 * @separator: points to strings printed between strings
 *
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
        char *st;

	va_list(list);

	va_start(list, n);

	for (c = 0; c < n; c++)
	{
		if (!separator)
			printf("%s", va_arg(list, int));
		else if (!n)
			printf("(nil)");
		else
			printf("%s%s", separator, va_arg(list, int));
	}
	va_end(list);
	printf("\n");
}