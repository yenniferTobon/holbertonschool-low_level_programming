#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - prints all the elements of a dlistint_t list.
 * @h: head liked list
 * Return: size_t the size linked list
 **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size = size + 1;
		h = h->next;
	}
	return (size);
}
