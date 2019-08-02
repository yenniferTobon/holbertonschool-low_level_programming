#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * *add_node_end - adds a new node at the end of a list_t list.
 * @head: node guide
 * @str: text input
 * Return: list_t
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *cola;
	int sizeStr = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	while (str[sizeStr])
		sizeStr++;

	cola = malloc(sizeof(list_t));

	if (cola == NULL)
		return (NULL);

	cola->str =  strdup(str);
	cola->len = sizeStr;

	if (*head == NULL)
	{
		*head = cola;
		return (*head);
	}
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = cola;
	return (cola);
}
