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
	listint_t *aux;
	listint_t *newN;

	aux = *head;
	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	while ((aux != NULL) && (position != (idx - 1)))
	{
		aux = (aux)->next;
		position++;
	}

	newN = malloc(sizeof(listint_t));

	if (newN == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		newN->next = *head;
		*head = newN;
	}
	else
	{
		newN->next = aux->next;
		aux->next = newN;
	}
	newN->n = n;
	return (newN);
}
