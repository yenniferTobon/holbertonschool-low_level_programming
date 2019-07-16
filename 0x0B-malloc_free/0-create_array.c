#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - array of chars, and initializes it with a specific char
 * @size:
 * @c:
 */

char *create_array(unsigned int size, char c)
{
 	char *p;
	unsigned int i = 0;

	p = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL)
;
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);

}
