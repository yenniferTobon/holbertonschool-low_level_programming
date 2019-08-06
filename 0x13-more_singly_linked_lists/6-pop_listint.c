#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head list
 * Return: int value
 **/

int pop_listint(listint_t **head)
{
	int num = 0;
	listint_t *aux = (*head)->next;

	if (head == NULL || *head != NULL)
	{
		return (0);
	}
	num = (*head)->n;
	(*head)->n = 0;
	free(*head);
	*head = aux;
	return (num);
}
