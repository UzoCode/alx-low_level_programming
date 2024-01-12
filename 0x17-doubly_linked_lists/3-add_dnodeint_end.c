#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Append a new node to the end of a dlistint_t list.
 * @head: Pointer to a pointer of doubly linked list head.
 * @n: Integer value to be stored in the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *fresh_node, *temp;

	fresh_node = malloc(sizeof(dlistint_t));
	if (fresh_node == NULL)
		return (NULL);

	fresh_node->n = n;
	fresh_node->next = NULL;

	if (*head == NULL)
	{
		fresh_node->prev = NULL;
		*head = fresh_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = fresh_node;
		fresh_node->prev = temp;
	}

	return (fresh_node);
}
