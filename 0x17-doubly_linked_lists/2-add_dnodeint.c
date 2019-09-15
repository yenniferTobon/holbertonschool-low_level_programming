#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: node head
 * @n: integer
 * Return: struct dlistint_t
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *neW;

	neW = malloc(sizeof(dlistint_t));
	if (neW == NULL)
	{
		return (NULL);
	}
	neW->next = *head;
	neW->prev = NULL;
	neW->n = n;

	if (*head != NULL)
		(*head)->prev = neW;
	*head = neW;
	return (neW);
}
