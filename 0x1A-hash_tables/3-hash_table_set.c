#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: table ht
 * @key: string to convert in hash
 * @value: value to the key
 * Return: return hash code
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int position;
	hash_node_t *new, *list, *start;

	if (key == NULL || strlen(key) == 0 || ht == NULL || value == NULL)
		return (0);
	position = key_index((const unsigned char *)key, ht->size);
	list = ht->array[position];

	if  (list == NULL)
	{
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		new->key = strdup(key);
		new->value = strdup(value);
		ht->array[position] = new;
		return (1);
	}
	while (list != NULL)
	{
		if (strcmp(list->key, key) == 0)
		{
			free(list->value);
			list->value = strdup(value);
			return (1);
		}
		list = list->next;
	}
	start = ht->array[position];
	new =  malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = start;
	ht->array[position] = new;
	return (1);
}
