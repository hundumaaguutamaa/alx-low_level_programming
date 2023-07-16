#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash table to add or update the key/value to.
 * @key: The key
 * @value: Value of  with the key
 *
 * Return: 1 if it succeeded, else 0 
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_tb *new_t;
	unsigned long int i, index;
	char *newer_value;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	newer_value = strdup(value);
	if (newer_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = newer_value;
			return (1);
		}
	}
	new_t = malloc(sizeof(hash_node_tb));
	if (new_t == NULL)
	{
		free(newer_value);
		return (0);
	}
	new_t->key = strdup(key);
	if (new_t->key == NULL)
	{
		free(new_t);
		return (0);
	}
	new_t->value = newer_value;
	new_t->next = ht->array[index];
	ht->array[index] = new_t;
	
	return (1);
}
