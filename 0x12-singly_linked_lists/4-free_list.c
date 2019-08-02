#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - function that frees a list_t list
 * @head: node guide
 **/

void free_list(list_t *head)
{
	list_t *headTemp = head;
	list_t *NewNode;

	while (headTemp)
	{
		NewNode  = headTemp->next;
		free(headTemp->str);
		free(headTemp);
		headTemp = NewNode;
	}
	head =  NULL;
}
