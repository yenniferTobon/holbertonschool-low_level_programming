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
	int *resp;
	unsigned int i = 0, j = 0, sizeMem = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	for (i = 1; i <= nmemb; i++)
	{
		for (j = 1; j <= size; j++)
			sizeMem = sizeMem + j;
	}

	resp = malloc(sizeof(int) * sizeMem);

	if (resp == NULL)
		return (NULL);

	return (resp);
}
