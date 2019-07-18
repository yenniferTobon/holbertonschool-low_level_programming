#include "holberton.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
/**
 * *_calloc - allocates memory for an array
 * @nmemb: size column
 * @size: size fila
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *resp;

	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	resp = malloc(nmemb * size);

	if (resp == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		resp[i] = 0;
	}
	return (resp);
}
