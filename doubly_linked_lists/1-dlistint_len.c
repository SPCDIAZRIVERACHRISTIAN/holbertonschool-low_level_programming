#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to the nodes
 *
 * Return: length of link list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}

