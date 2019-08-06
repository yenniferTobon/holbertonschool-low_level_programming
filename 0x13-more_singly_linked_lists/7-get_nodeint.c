#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index -
 * @head:
 * @index:
 * Return: listint_t
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int  position = 0;

	while ((head != NULL) && (position != index))
	{
		head = head->next;
		position++;
	}

	if (head == NULL)
	{
		return (NULL);
	}
	return (head);
}
