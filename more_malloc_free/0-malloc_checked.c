#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - checks if malloc allocated memory
 * @b: number of bytes
 *
 * Return: returns a pointer allocated in memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
