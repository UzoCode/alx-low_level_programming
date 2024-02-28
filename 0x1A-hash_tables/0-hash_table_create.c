#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The array size.
 *
 * Return: NULL on error.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hat;
	unsigned long int a;

	hat = malloc(sizeof(hash_table_t));
	if (hat == NULL)
		return (NULL);

	hat->size = size;
	hat->array = malloc(sizeof(hash_node_t *) * size);
	if (hat->array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		hat->array[a] = NULL;

	return (hat);
}
