#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: Size of array
 *
 * Return:  A pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hsht = NULL;

	if (size == 0)
		return (NULL);
		
	new_hsht = malloc(sizeof(hash_table_t));
	if (!new_hsht)
		return (NULL);

	new_hsht->size = size;
	new_hsht->array = calloc((size_t)size, sizeof(hash_node_t *));

	if (new_hsht->array == NULL)
		return (NULL);

	return (new_hsht);
}
