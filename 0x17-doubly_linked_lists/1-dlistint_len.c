#include "lists.h"

/**
 * dlistint_len - Returns number of elements in a dlistint_t list.
 * @h: Pointer to doubly linked list head.
 * Return: Number of elements (nodes) in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_counts = 0;

	while (h != NULL)
	{
		h = h->next;
		node_counts++;
	}
	return (node_counts);
}
