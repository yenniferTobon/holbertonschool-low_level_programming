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

	hash_node_t *aux;

	while (i <= ht->size)
	{
		aux = ht->array[i];
		if (aux != NULL)
		{
			while (aux != NULL)
			{
				hash_node_t *aux2 = aux->next;

				free(aux->key);
				free(aux->value);
				free(aux);
				aux = aux2;
			}
		}
		i = i + 1;
	}
	free(ht->array);
	free(ht);
}
