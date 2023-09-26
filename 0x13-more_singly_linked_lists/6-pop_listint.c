#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int dnode;
	listint_t *i;
	listint_t *curs;

	if (*head == NULL)
		return (0);

	curs = *head;

	dnode = curs->n;

	i = curs->next;

	free(curs);

	*head = i;

	return (dnode);
}

