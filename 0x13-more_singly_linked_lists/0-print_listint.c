#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list
 * @h: head list
 * Return: size_t zise list
 **/

size_t print_listint(const listint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		size++;
		printf("\n");
	}
	return (size);
}
