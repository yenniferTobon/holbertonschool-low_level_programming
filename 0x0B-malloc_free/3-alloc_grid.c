
#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 **alloc_grid - function that print a pointer to a 2 dimensional
 *@width : int variable width of matriz
 *@height : int variable height of matriz
 *Return: 0 sucess
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, **matriz;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matriz = malloc(height * sizeof(int *));

	if (matriz == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matriz[i] = malloc(width * sizeof(int));
		if (matriz[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(matriz[j]);
			}
			free(matriz);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matriz[i][j] = 0;
				}
	}
	return (matriz);
}
