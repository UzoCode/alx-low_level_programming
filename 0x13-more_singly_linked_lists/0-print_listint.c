#include "lists.h"

/**
 * print_listint - prints every elements of a list.
 * @h: points to the head of list_t list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t Nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		Nnodes++;
	}
	return (Nnodes);
}
