#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - array of chars, and initializes it with a specific char
 * @size: array size
 * @c: char to repeat
 * Return: char p
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;


	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	if (p == NULL)
		return (NULL);
	return (p);

}
