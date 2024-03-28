#include "lists.h"

/**
 * add_dnodeint - adds node to the front of link
 * @head: points to the start of list
 * @n: value of the data in list
 * 
 * Return: new node created in list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        return (NULL);
    }
    if (*head != NULL)
    {
        (*head)->prev = new;
    }
    new->n = n;
    new->next = *head;
    new->prev = NULL;
    *head = new;

    return (new);
}