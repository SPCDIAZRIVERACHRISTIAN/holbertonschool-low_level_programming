#include "variadic_functions.h"

/**
 * sum_them_all - adds al the numbers given
 * @n: arguments that goes in function
 *
 * Return: returns the sum of all numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum = va_arg(list, int);

	va_end(list);

	return sum;
}
