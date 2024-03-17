#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @n: number of strings
 * @separator: points to strings printed between strings
 * estabas haciendo un string para poder asignarlo a va_arg y eso iba a reflejar el string en n
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
        char *st;

	va_list(list);

	va_start(list, n);

	for (c = 0; c < n; c++)
	{
		st = va_arg(list, char *);
		if (!separator)
			printf("%s", st);

		if (!st)
			printf("(nil)");

		else if (separator && c == 0)
			printf("%s", st);

		else
			printf("%s%s", separator, st);
	}
	va_end(list);
	printf("\n");
}