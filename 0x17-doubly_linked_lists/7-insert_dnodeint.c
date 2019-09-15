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
	dlistint_t *aux, *neW;
	unsigned int i = 0;

	aux = *h;

	if ((!*h && idx) || !h)
		return (0);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (aux != NULL)
	{
		if (aux->next == NULL)
		{
			return (add_dnodeint_end(h, n));
		}
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

