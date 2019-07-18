#include "holberton.h"
#include <stdlib.h>
#include <limits.h>
/**
 * *malloc_checked - allocates memory using
 * @b: value assign memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *resp;

	resp = malloc(b);
	if (resp == NULL)
	{
		exit(98);
	}
	return (resp);
}

