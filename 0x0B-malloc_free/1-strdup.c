#include "holberton.h"
#include <stdlib.h>
#include <limits.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: array size
 * Return: char p
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0;
	int tamano = 0;

	if (str == NULL)
		return (NULL);

	while (str[tamano] != '\0')
		tamano = tamano + 1;

	tamano = tamano - 1;
	p = malloc(sizeof(char) * tamano);

	if (p == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		*(p + i) = *(str + i);
		i = i + 1;
	}
	return (p);
}
