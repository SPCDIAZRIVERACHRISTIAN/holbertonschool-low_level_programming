#include "lists.h"

/**
 * printdlistint - prints size of link list
 * @h: points to the link list structure
 * 
 * return: size of the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h)
		{
			printf("(nil)");
			 return (1);
		}
		else
		{
			printf("%d\n", h->n);
			h = h->next;
			s++;
		}
	}
	return (s);
}