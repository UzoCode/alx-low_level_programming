#include "lists.h"

/**
 * insert_nodeint_at_index - it inserts a new node
 * in a given position.
 * @head: the head of a list.
 * @idx: index of list where new node is added.
 * @n: The integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int u;
	listint_t *dnew;
	listint_t *he;

	he = *head;

	if (idx != 0)
	{
		for (u = 0; u < idx - 1 && he != NULL; u++)
		{
			he = he->next;
		}
	}

	if (he == NULL && idx != 0)
		return (NULL);

	dnew = malloc(sizeof(listint_t));
	if (dnew == NULL)
		return (NULL);

	dnew->n = n;

	if (idx == 0)
	{
		dnew->next = *head;
		*head = dnew;
	}
	else
	{
		dnew->next = he->next;
		he->next = dnew;
	}

	return (dnew);
}
