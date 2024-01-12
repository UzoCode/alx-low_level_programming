#include "lists.h"

/**
 * get_dnodeint_at_index - Returns dlistint_t linked list nth node.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node, starting from 0.
 * Return: The nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counts = 0;

	while (head != NULL)
	{
		if (counts == index)
			return (head);

		head = head->next;
		counts++;
	}

	return (NULL);
}
