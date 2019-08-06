#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list
 * @h: head list
 * Return: size_t zise list
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	int size = 0;

	while (current != NULL)
	{
		printf("%d", current->n);
		current = current->next;
		size++;
		printf("\n");
	}
	return (size);
}
