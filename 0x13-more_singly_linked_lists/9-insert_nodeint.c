#include "lists.h"
#include <stdlib.h>
/**
* insert_nodeint_at_index - Inserts a new node at a given position.
* @head: Pointer to pointer to the linked list.
* @idx: Index desired for the new node.
* @n: Number to initialize the new node.
* Return: Pointer to the node at index, or NULL if the index doesn't exist.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int position = 0;
	listint_t *aux, *newN;

	aux = *head;
	if (head == NULL || *head == NULL)
		return (NULL);
	newN = malloc(sizeof(listint_t));
	if (newN == NULL)
	{
		return (NULL);
	}
	newN->n = n;
	newN->next = NULL;
	aux =  *head;
	if (aux == NULL)
	{
		*head = newN;
		newN->next = NULL;
		return (newN);
	}
	if (idx == 0)
	{
		newN->next = *head;
		*head = newN;
		return (newN);
	}
	while ((aux != NULL) && (position != (idx - 1)))
	{
		aux = (aux)->next;
		position++;
		if (aux == NULL)
		{
			free(newN);
			return (NULL);
		}
	}
	newN->next = aux->next;
	aux->next = newN;
	newN->n = n;
	return (newN);
}
