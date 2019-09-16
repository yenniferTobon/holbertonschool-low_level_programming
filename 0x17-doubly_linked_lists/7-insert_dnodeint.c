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
	unsigned int i = 0, j = 0;
	dlistint_t *aux = *h, *neW = malloc(sizeof(dlistint_t));

	if (neW == NULL)
		return (NULL);
	if ((!*h && idx) || h == NULL)
	{
		*h = neW;
		neW->next = NULL;
		return (neW);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (aux != NULL && j == 0)
	{
		if (aux->next == NULL)
		{
			j = 1;
			return (add_dnodeint_end(h, n));
		}
		else
		{
			if (i == idx - 1)
			{
				if (neW == NULL)
					return (NULL);
				aux->next->prev = neW;
				neW->next = aux->next;
				aux->next = neW;
				neW->prev = aux;
				neW->n = n;
				j = 1;
			}
			i = i + 1;
			aux = aux->next;
		}
	}
	return (neW);
}
