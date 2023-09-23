#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at the begining of list_t
 * @head: pointer to structure
 * @str: string
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newN;
	unsigned int lent = 0;

	newN = malloc(sizeof(list_t));
	if (newN == NULL)
	{
		free(newN);
		return (NULL);
	}
	newN->str = strdup(str);
	while (str[lent] != '\0')
	{
		lent++;
	}
	newN->len = lent;
	if (*head != NULL)
		newN->next = *head;
	if (*head == NULL)
		newN->next = NULL;
	*head = newN;
	return (*head);
}
