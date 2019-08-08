#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index -
 * @head:
 * @index:
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
	}

	if ((cont == index - 1) && (cont != 0))
	{
		aux2 = aux->next;
		aux->next = aux2->next;
		free(aux2);
	}
	if ((*head)->next == NULL)
	{
		free(*head);
		free(head);
	}
	return (1);
}
