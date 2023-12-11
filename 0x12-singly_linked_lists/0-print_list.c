#include <stdio.h>
/**
 * print_list - prints all the elements of a linnked list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%lu] %s\n", ++node_count, h->str);
		}
		else
		{
			printf("[%lu] %s\n", ++node_count, "(nil)");
		}

		h = h->next;
	}

	return (node_count);
}
