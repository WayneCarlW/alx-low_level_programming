#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - prints the elements of a doubly linked list
 * @h: doubly linked list
 * @node: the current node of a doubly linked list
 * Return: number of elements int the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const listint_t *node = h;
	while (h != NULL)
	{
		count++;
		printf("%d\n", h->data);
		node = h->next;
	}
	return (count);
}
