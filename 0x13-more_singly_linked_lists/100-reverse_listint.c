#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to pointer to the head of linked list.
 *
 * You are not allowed to use more than 1 loop.
 * You are not allowed to use malloc, free or arrays.
 * You can only declare a maximum of two variables in your function.
 *
 * There should be no memory leaks.
 *
 * Return:  the pointer to first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	if (current->next == NULL)
	{
		*head = current;
		return (*head);
	}

	else if (*head && (*head)->next)
	{

		listint_t *temp_variable = *head;
		*head = (*head)->next;
		reverse_listint(head);
		temp_variable->next->next = current;
		temp_variable->next = NULL;
	}

	return (*head);
}
