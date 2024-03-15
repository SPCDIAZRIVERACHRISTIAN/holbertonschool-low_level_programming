#include "variadic_functions"

/**
 *
 *
 *
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	int i, result;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		result == va_arg(ptr, int);

	va_end(ptr);

	return result;

	if (separator == NULL)
		return;


