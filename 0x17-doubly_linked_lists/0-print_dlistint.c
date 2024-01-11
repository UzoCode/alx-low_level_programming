#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t list.
 * @h: Pointer to doubly linked list head
 * Return: Total number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_counts = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_counts++;
	}
	return (node_counts);
}
