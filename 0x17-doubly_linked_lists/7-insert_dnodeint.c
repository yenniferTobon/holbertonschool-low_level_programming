#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head list
 * @idx: poticion a print
 * @n: value n
 * Return: dlistint_t
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *aux = *h, *neW;

	if ((!*h && idx) || h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (i < idx - 1)
	{
		aux = aux->next;
		if (!aux)
			return (NULL);
		i++;
	}

	if (aux->next == NULL)
		return (add_dnodeint_end(h, n));

	while (aux != NULL)
	{
		if (i == idx - 1)
		{
			neW = malloc(sizeof(dlistint_t));
			if (neW == NULL)
			{
				return (NULL);
			}
			aux->next->prev = neW;
			neW->next = aux->next;
			aux->next = neW;
			neW->prev = aux;
			neW->n = n;
		}
		i = i + 1;
		aux = aux->next;
	}
	return (neW);
}
