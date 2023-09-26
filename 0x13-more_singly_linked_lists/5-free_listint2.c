#include "lists.h"

/**
 * free_listint2 - Frees listint_t list.
 * @head: Pointer to address of the
 * head of the listint_t list.
 * Description: It sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmps;

	if (head == NULL)
		return;

	while (*head)
	{
		tmps = (*head)->next;
		free(*head);
		*head = tmps;
	}

	head = NULL;
}
