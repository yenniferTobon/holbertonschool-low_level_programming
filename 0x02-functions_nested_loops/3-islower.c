#include "holberton.h"
#include <ctype.h>

/**
 * _islower - 1 if is lowercase
 * @c: The number to be checked
 * Return: 1 if is lowercase, 0 otherwise
 */

int _islower(int c)
{
	c = c + 48;

	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}


