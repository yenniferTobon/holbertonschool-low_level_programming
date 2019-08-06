#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head
 * Return: size_t
 **/
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t size = 0;

	while (current != NULL)
	{
		current = current->next;
		size++;
	}
	return (size);
}

