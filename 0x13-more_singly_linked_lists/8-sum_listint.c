#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * @head: head list
 * Return: sum of all the data
 **/

int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
