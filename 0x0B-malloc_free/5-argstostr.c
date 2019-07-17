
#include "holberton.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: number arguments
 * @av: array arguments
 * Return: char p
 */

char *argstostr(int ac, char **av)
{
	char *resp;
	int i = 0, j = 0, aux = 0, size = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			;
		}
		size = size + j;
		size++;
	}
	size++;

	resp = malloc(sizeof(char) * size);

	if (resp == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0 ; av[i][j] != '\0'; j++)
		{
			resp[aux] = av[i][j];
			aux++;
		}
		resp[aux] = '\n';
		aux++;
	}

	resp[aux] = '\0';
	return (resp);
}

