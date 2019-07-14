#include "holberton.h"
#include <stdlib.h>

/**
 * _abs - absolute value of integer
 * @c: The number to be checked
 * Return: to value
 */

int _abs(int c)
{
	if (c < 0)
	{
		c = -c;
	}
	return (c);
}
