#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head  linked list
 * @n: attribute
 * Return: dlistint_t typr struct
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail;
	dlistint_t *temp;

	temp = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	tail = malloc(sizeof(dlistint_t));
	if (tail == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		tail->prev = *head;
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
