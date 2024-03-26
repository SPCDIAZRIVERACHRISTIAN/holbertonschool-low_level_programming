#include "lists.h"

/**
 * 
 * 
 * 
 * 
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->n)
		{
			printf("(nil)");
			return (1);
		}
		else
		{
			printf("%d\n", h->n);
			h = h->next;
		}
		s++;
	}
	return (s);
}