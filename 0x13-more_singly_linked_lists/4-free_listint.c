#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a singly linked list.
 * @head: pointer to the head of linked list.
 *
 * Return: No return.
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);

	free(head);
}
