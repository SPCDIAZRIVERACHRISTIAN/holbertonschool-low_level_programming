#include "main.h"

/**
 * void swap_int - swaps the value of a with the value of b.
 *
 * @a: the result is integer b in integer a
 * @b: will have the result from a in b.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
