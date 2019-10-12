#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: table ht
 * @key: string to convert in hash
 * Return: return char
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indice;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	indice = key_index((const unsigned char *)key, ht->size);

	while (ht->array[indice] != NULL)
	{
		if (strcmp(ht->array[indice]->key, key) == 0)
		{
			return (ht->array[indice]->value);
		}
		ht->array[indice] = ht->array[indice]->next;
	}
	return (NULL);

}
