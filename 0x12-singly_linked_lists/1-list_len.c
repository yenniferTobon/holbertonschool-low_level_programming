#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * *list_len - returns the number of elements in a linked list_t list
 * @h: head list
 * Return: size list
 **/
size_t list_len(const list_t *h)
{
	size_t size = 0;
	const list_t *listavarios;

	listavarios = h;

	while (listavarios != NULL)
	{
		size++;
		listavarios = listavarios->next;
	}
	return (size);
}
