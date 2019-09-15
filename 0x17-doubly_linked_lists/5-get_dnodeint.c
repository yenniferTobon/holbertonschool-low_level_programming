#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head the dlistint_t
 * @index: poticion a print
 * Return: dlistint_t
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int i = 0;

	aux = head;

	while (aux != NULL)
	{
		if (i == index)
		{
			return (aux);
		}
		else
		{
			aux = aux->next;
		}
		i = i + 1;
	}
	return (NULL);
}

