#include "holberton.h"
#include <ctype.h>

/**
 * _islower - 1 if is lowercase
 * @c: The number to be checked
 * Return: 1 if is lowercase, 0 otherwise
 */

int _islower(int c)
{
	int i = 0;

	i = islower(c);

	if (i == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}


