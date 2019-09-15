#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - function that free a dlistint_t list
 * @head: head the list
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *aux;

	temp = head;

	while (temp != NULL)
	{
		aux = temp->next;
		free(temp);
		temp = aux;
	}
}
