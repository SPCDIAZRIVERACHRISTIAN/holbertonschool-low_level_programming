#include "lists.h"

/**
 * print_list - prints all inside of linked list
 * @h: points to the list to be printed
 * 
 * Return: The number of nodes
 * 
*/

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}