#include "lists.h"

/**
 * free_list - frees list
 * @head: head of a linked list.
 * Return: None.
 */

void free_list(list_t *head)
{
	list_t *recent;

	while ((recent = head) != NULL)
	{
		head = head->next;
		free(recent->str);
		free(recent);
	}
}

