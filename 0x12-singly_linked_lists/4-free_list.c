#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: node guide
 **/

void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *cola;

	while (temp)
	{
		cola  = temp->next;
		free(temp->str);
		free(temp);
		temp = cola;
	}
	head =  NULL;
}
