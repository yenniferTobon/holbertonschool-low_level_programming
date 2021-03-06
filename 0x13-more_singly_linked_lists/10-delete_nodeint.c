#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: input head
 * @index: number node delete
 * Return: int
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cont = 0;
	listint_t *aux, *aux2;

	aux = *head;

	if (!*head || !head)
		return (-1);

	if (((*head)->next != NULL) && (index == 0))
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
		return (1);
	}

	while ((aux != NULL) && (cont != index - 1))
	{
		aux = aux->next;
		cont++;
		if (aux == NULL)
			return (-1);
	}

	aux2 = aux->next;
	aux->next = aux2->next;
	free(aux2);
	return (1);
}
