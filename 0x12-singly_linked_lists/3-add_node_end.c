#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - adds new node to the end of a list_t list.
 * @head: head of linked list.
 * @str: string to be store in the list.
 * Return: head address.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newN, *tempN;
	size_t mchar;

	newN = malloc(sizeof(list_t));
	if (newN == NULL)
		return (NULL);

	newN->str = strdup(str);

	for (mchar = 0; str[mchar]; mchar++)
		;

	newN->len = mchar;
	newN->next = NULL;
	tempN = *head;

	if (tempN == NULL)
	{
		*head = newN;
	}
	else
	{
		while (tempN->next != NULL)
			tempN = tempN->next;
		tempN->next = newN;
	}

	return (*head);
}

