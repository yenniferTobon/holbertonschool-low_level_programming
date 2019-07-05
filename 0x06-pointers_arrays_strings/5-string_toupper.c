#include "holberton.h"
#include <stdio.h>
/**
 * *string_toupper - all lowercase of a string to uppercase
 * @a: char in lowercase
 * Return: char
 */

char *string_toupper(char *a)
{
	int tamano = 0, i = 0;
	char aux[500];

	while (*(a + tamano) != '\0')
	{
		tamano = tamano + 1;
	}

	for (i = 0; i < tamano; i++)
	{
		if (*(a + i) <= 90)
		{
			*(a + i) = *(a + i);
		}
		else
		{
			aux[i] = (*(a + i)) - 32;
			*(a + i) = aux[i];
		}
	}
	return (a);
}
