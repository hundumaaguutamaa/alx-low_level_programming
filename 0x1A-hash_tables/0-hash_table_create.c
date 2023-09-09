#include "hash_tables.h"

/**
 * hash_table_create - function to create the hash table
 * @size: size of an array
 *
 * Return: pointer of new created hash table
 */ 

hash_table_t *hash_table_create(unsigned long int size);
{
	hash_table_t *hash_t = NULL;

	if (size == 0)
        	return (NULL);

    hash_t = malloc(sizeof(hash_table_t));
    if (!hash_t)
        return (NULL);

    hash_t->size = size;
    hash_t->array = calloc((size_t)size, sizeof(hash_node_t *));
	
    if (hash_t->array == NULL)
    
        return (NULL);

    return (hash_t);
}
