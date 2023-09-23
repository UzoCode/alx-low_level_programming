#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements list
 * @h: pointer to structure
 * Return: length.
 */

size_t list_len(const list_t *h)
{

	unsigned int u = 0;

	while (h != NULL)
	{
		u++;
		h = h->next;
	}
	return (u);
}
