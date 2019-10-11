#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: string to convert in hash
 * @size: size table
 * Return: unsigned long int
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int new_index;

	new_index = hash_djb2(key) % size;
	return (new_index);
}
