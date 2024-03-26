#include "lists.h"

/**
 * 
 * 
 * 
 * 
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new;

    new = malloc(sizeof(dlistint_t));

    if (!new)
        printf("0");

    new->n = n;
    new->next = (*head);
    (*head) = new;

    return (*head);
}