#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table to print.
 * 
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
    hash_node_t *tmp_n = NULL;
	char *c_flag = "";
	

	if (ht)
	{
		
		while (index < ht->size)
		{
			tmp_n = ht->array[index];

			while (tmp_n)
			{
				printf("%s", c_flag);
				c_flag = ", ";

				if (tmp_n->key)
					printf("'%s': '%s'", tmp_n->key, tmp_n->value);
				tmp_n = tmp_n->next;
			}
			index++;
		}
		
	}
}
