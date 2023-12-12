#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints the elements of a list
 *
 * @h: pointer to a character in the string to be printed
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
