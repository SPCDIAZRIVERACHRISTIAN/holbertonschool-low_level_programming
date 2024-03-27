#include "lists.h"

/**
 * 
 * 
 * 
 * 
 * 
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	if(!node)
		return (NULL);

	while (i < index)
	{
		node = node->next;
		i++;
	}
	return (node);
}