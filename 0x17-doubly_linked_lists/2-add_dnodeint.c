#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds new node at the beginning of a dlistint_t list.
 * @head: Pointer to pointer to doubly linked list head.
 * @n: Integer value to be stored in the new node.
 * Return: Address of new element, or NULL if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *fresh_node;

	fresh_node = malloc(sizeof(dlistint_t));
	if (fresh_node == NULL)
		return (NULL);

	fresh_node->n = n;
	fresh_node->prev = NULL;
	fresh_node->next = *head;

	if (*head != NULL)
		(*head)->prev = fresh_node;

	*head = fresh_node;

	return (fresh_node);
}
