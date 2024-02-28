#include "hash_tables.h"

/**
 * hash_table_get - Retrieves value associated with
 *                  a key in a hash table.
 * @ht: Pointer to the hash table.
 * @key: key to get the value of.
 *
 * Return: NULL when key is unmatched
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nodes;
	unsigned long int indexs;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	indexs = key_index((const unsigned char *)key, ht->size);
	if (indexs >= ht->size)
		return (NULL);

	nodes = ht->array[indexs];
	while (nodes && strcmp(nodes->key, key) != 0)
		nodes = nodes->next;

	return ((nodes == NULL) ? NULL : nodes->value);
}
