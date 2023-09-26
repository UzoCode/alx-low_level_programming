#include "lists.h"

/**
 * free_listint - It frees a linked list
 * @head: A list head.
 *
 * Return: None.
 */
void free_listint(listint_t *head)
{
	listint_t *tep;

	while ((tep = head) != NULL)
	{
		head = head->next;
		free(tep);
	}
}
