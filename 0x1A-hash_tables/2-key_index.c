#include "hash_tables.h"

/**
 * key_index - Index of a key.
 * @key: key of the pair.
 * @size: Array size of the hash table.
 *
 * Return: Index where key/value pair should be stored in array table. 
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	return (hash_djb2(key) % size);

}
