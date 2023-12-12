#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - function that  prints a listint_t linked list.
 * @head: pointer to the head of linked list.
 *
 * This function can print lists with a loop.
 * You should go through the list only once.
 * If the function fails, exit the program with status 98.
 *
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	listnode_t *nodes = NULL; /* stores address of nodes */
	size_t count = 0;

	while (!is_in_nodes(nodes, head))
	{
		if (!add_nodeptr(&nodes, head))
		{
			free_listnode(nodes);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}
	if (head != NULL)
		printf("-> [%p] %d\n", (void *)head, head->n);

	free_listnode(nodes);

	return (count);
}

/**
 * add_nodeptr - adds a new node at the beginning of a listint_t list
 * @head: pointer to the pointer to the first node
 * @ptr: the value of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listnode_t *add_nodeptr(listnode_t **head, const listint_t *ptr)
{
	listnode_t *new_node;

	new_node = malloc(sizeof(listnode_t));
	if (new_node == NULL)
		return (NULL);
	new_node->ptr = (listint_t *)ptr;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * free_listnode - frees a free_listnode list
 * @head: pointer to first node of the list
 */
void free_listnode(listnode_t *head)
{
	if (head == NULL)
		return;
	free_listnode(head->next);
	free(head);
}

/**
 * is_in_nodes - checks whether a given address is in a given list
 * @head: first node in the list
 * @ptr: address
 *
 * Return: 1 if address is in nodes. Otherwise 0
 */
int is_in_nodes(listnode_t *head, const listint_t *ptr)
{
	if (ptr == NULL)
		return (1);
	/* traverse the list */
	while (head != NULL)
	{
		if (ptr == head->ptr)
			return (1);
		head = head->next;
	}
	return (0);
}
