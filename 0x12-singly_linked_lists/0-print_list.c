#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: head list
 * Return: size_t zise list
 **/
size_t print_list(const list_t *h)
{
	unsigned int size = 0;
	const list_t *listavarios = h;

	while (listavarios != NULL)
	{
		if (listavarios->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nill)");
			listavarios = listavarios->next;
			size++;
		}
		else
		{
			printf("[%d] %s\n", listavarios->len, listavarios->str);
			listavarios = listavarios->next;
			size++;
		}
	}
	return (size);
}
