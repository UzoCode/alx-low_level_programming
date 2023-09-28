#include "lists.h"
#include <stdio.h>

size_t loops_listint_lent(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
* loops_listint_lent - Counts number of unique nodes
*                  in a loops listint_t linked list.
* @head: Pointer to the head of the listint_t to check.
* Return: 0 if list is not loops.
*         Otherwise - Number of unique nodes in the list.
*/
size_t loops_listint_lent(const listint_t *head)
{
	const listint_t *tor, *h;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tor = head->next;
	h = (head->next)->next;
	while (h)
	{
		if (tor == h)
		{
			tor = head;
			while (tor != h)
			{
				node++;
				tor = tor->next;
				h = h->next;
			}
			tor = tor->next;
			while (tor != h)
			{
				node++;
				tor = tor->next;
			}
			return (node);
		}
		tor = tor->next;
		h = (h->next)->next;
	}
	return (0);
}


/**
* print_listint_safe - Prints listint_t list.
* @head: Pointer to the head of the listint_t list.
* Return: Number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t node, ind = 0;

	node = loops_listint_lent(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (ind = 0; ind < node; ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
