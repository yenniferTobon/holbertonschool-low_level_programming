#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: table ht
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	while (i <= ht->size)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i] != NULL)
			{
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				ht->array[i] = ht->array[i]->next;
				free(ht->array[i]);
			}
		}
		i = i + 1;
	}
	free(ht->array);
	free(ht);
}
