#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: head list
 * @str: string a save
 * Return: node new
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *nuevo;
	int sizeStr = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	nuevo = malloc(sizeof(list_t));

	if (nuevo == NULL)
		return (NULL);
	while (str[sizeStr])
	{
		sizeStr++;
	}

	nuevo->str = strdup(str);
	nuevo->len = sizeStr;
	nuevo->next = *head;
	*head = nuevo;

	return (nuevo);
}
