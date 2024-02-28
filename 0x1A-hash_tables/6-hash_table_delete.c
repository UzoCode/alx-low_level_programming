#include "hash_tables.h"

/**
 * hash_table_delete - function Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *nodes, *tmp;
	unsigned long int a;

	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			nodes = ht->array[a];
			while (nodes != NULL)
			{
				tmp = nodes->next;
				free(nodes->key);
				free(nodes->value);
				free(nodes);
				nodes = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
