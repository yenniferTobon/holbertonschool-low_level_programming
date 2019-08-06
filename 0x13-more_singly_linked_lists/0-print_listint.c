#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list
 * @h: head list
 * Return: size_t zise list
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t size = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		size++;
	}
	return (size);
}
