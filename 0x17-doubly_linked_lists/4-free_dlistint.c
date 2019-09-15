#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - function that free a dlistint_t list
 * @head: head the list
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
		if (head != NULL)
		{
			head->prev = NULL;
		}
	}

}
