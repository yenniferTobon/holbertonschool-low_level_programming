
#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number in int
 * @index: position
 * Return: int '0' o '1'
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	else
	{
		*n = *n | (1 << index);
	}
	return (1);
}
