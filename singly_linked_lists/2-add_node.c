#include "lists.h"

/**
 * add_node - adds node to the head of list
 * @head: points to the head node of the list
 * @str: points to the string to be printed
 * 
 * Reurn: returns the new head node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}