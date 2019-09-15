#include <stdlib.h>
#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head  linked list
 * @n: attribute
 * Return: dlistint_t typr struct
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail, *temp;

	temp = *head;

	tail = malloc(sizeof(dlistint_t));

	if (tail == NULL)
	{
		return (NULL);
	}

	tail->n = n;
	tail->next = NULL;

	if (*head == NULL)
	{
		tail->prev = NULL;
		*head = tail;
		return (tail);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = tail;
	tail->prev = temp;
	return (tail);
}
