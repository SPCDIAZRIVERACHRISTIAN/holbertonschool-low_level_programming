#include "lists.h"

/**
 * free_dlistint - frees link list memory
 * @head: points to the start of list
 * 
*/

void free_dlistint(dlistint_t *head)
{
        dlistint_t *temp;

        while (head)
        {
                temp = head->next;
                free(head);
                head = temp;
        }
}