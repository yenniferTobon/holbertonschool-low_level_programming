#include "holberton.h"
#include <ctype.h>

/**
 * _islower - 1 if is lowercase
 * @c: The number to be checked
 * Return: 1 if is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


