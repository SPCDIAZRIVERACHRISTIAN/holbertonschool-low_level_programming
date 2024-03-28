#include "lists.h"

/**
 * sum_dlistint - adds all the values in list
 * @head: points to start of list
 * 
 * Return: summary of nodes
*/

int sum_dlistint(dlistint_t *head)
{
        int sum = 0;

        if (head == NULL)
                return (0);

        while (head != NULL)
        {
                sum += head->n;
                head = head->next;
        }
        return (sum);
}