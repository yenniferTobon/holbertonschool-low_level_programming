#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - returns the nth node of a dlistint_t link
 * @head: head the dlistint_t
 * Return: dlistint_t
 **/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux;
	int add = 0;

	aux = head;

	while (aux != NULL)
	{
		add = add + aux->n;
		aux = aux->next;
	}
	return (add);
}

