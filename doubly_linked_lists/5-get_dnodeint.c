#include "lists.h"

/**
 * get_dnodeint_at_index - gets node pointed with index
 * @head: points to the start of list
 * @index: index to be pointed to
 * 
 * Return: node selected
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;


	while (i < index)
	{
		if(!node)
			return (NULL);
			
		node = node->next;
		i++;
	}
	return (node);
}