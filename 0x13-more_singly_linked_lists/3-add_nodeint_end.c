#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head
 * @n: varible
 * Return: add_nodeint_end
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux = *head;

	listint_t *tail = malloc(sizeof(listint_t));

	if (tail == NULL)
	{
		return (NULL);
	}

	tail->n = n;
	tail->next = NULL;

	if (*head == NULL)
	{
		*head = tail;
		return (*head);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}

	aux->next = tail;
	return (tail);
}
