#include "hash_tables.h"

/**
 * hash_table_set - Adds or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *fresh;
	char *values_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	values_copy = strdup(value);
	if (values_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = values_copy;
			return (1);
		}
	}

	fresh = malloc(sizeof(hash_node_t));
	if (fresh == NULL)
	{
		free(values_copy);
		return (0);
	}
	fresh->key = strdup(key);
	if (fresh->key == NULL)
	{
		free(fresh);
		return (0);
	}
	fresh->value = values_copy;
	fresh->next = ht->array[index];
	ht->array[index] = fresh;

	return (1);
}
