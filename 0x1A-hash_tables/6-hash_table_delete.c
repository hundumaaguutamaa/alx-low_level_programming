#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Hash table to be deleted
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
    hash_node_t *p_node;
	hash_table_t *head = ht;
	

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			p_node = ht->array[i];
			while (p_node != NULL)
			{
				temp = p_node->next;
				free(p_node->key);
				free(p_node->value);
				free(p_node);
				p_node = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
