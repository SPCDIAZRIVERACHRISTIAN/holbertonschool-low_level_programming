#include "variadic_functions.h"

/**
 * print_numbers - prints numbers and chars given
 * @separator: points to character
 * @n: argument assigned to elipsis
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(list);
	unsigned int c;

	va_start(list, n);

	for (c = 0; c < n; c++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && c == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}
	va_end(list);
	printf("\n");
}


