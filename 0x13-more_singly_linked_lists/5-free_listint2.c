#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: head list
 **/

void free_listint2(listint_t **head)
{
	listint_t  *aux;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
	*head = NULL;
}

