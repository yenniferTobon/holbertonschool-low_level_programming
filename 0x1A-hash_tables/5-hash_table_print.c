#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: table ht
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, aux = 0;

	if (ht == NULL)
		return;
	printf("%s", "{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (aux == 1)
			{
				printf("%s", ", ");
			}
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			aux = 1;
		}
		i = i + 1;
	}
	printf("%s\n", "}");
}
