#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns number of elements listint_t list.
 * @h: Pointer to the head of the listint_t list.
 *
 * Return: Number of elements in listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h)
	{
		nnodes++;
		h = h->next;
	}

	return (nnodes);
}
