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
	listint_t *aux = *head, *Nodenew;

	if (((head == NULL) && (idx == 0)) || !head)
		return (0);

	while (idx > 1)
	{
		aux = aux->next;
		if (!aux)
			return (0);
		idx--;
	}
	Nodenew = malloc(sizeof(listint_t));
	if (Nodenew == NULL)
		return (0);
	if (idx == 0)
	{
		*head = Nodenew;
		Nodenew->next = aux;
	}
	else
	{
		Nodenew->next = aux->next;
		aux->next = Nodenew;
	}
	Nodenew->n = n;
	return (Nodenew);
}

