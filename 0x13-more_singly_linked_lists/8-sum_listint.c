#include "lists.h"

/**
 * sum_listint - Gets the sum of all the data (n) of
 * a linked list.
 * @head: pointer of head of a list.
 *
 * Return: The sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sums;

	sums = 0;
	while (head != NULL)
	{
		sums += head->n;
		head = head->next;
	}

	return (sums);
}
