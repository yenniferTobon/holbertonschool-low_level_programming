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

	if (str == NULL)
		return (NULL);

	p = malloc(sizeof(char));

	if (p == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		*(p + i) = *(str + i);
		i = i + 1;
	}
	return (p);
}
