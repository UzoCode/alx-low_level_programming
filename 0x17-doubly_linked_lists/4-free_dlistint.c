#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - function to free a dlistint_t list.
 * @head: Pointer to the doubly linked list head.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temps;

	while (head != NULL)
	{
		temps = head;
		head = head->next;
		free(temps);
	}
}
