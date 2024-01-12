#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes node at given index in a list.
 * @head: Pointer to a pointer to doubly linked list head.
 * @index: Index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int counts = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
		if (counts == index)
		{
			prev->next = temp->next;

			if (temp->next != NULL)
				temp->next->prev = prev;

			free(temp);
			return (1);
		}

		prev = temp, temp = temp->next, counts++;
	}

	return (-1);
}
