#include "holberton.h"
#include <stdlib.h>
#include <limits.h>
/**
 * *array_range - creates an array of integers
 * @min: min range
 * @max: max range
 * Return: int pointer
 */

int *array_range(int min, int max)
{
	int *resp;
	int size = 0, i = 0, j = 0;

	if (min > max)
		return (NULL);

	size = ((max - min) + 1);

	resp = malloc(sizeof(int) * size);
	if (resp == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		resp[j] = resp[min];
		j++;
	return (resp);
}
