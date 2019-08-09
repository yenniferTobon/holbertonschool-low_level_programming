#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: num in int
 * @index: position
 * Return: int
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long num;

	if (index > 64)
		return (-1);

	num = ((n >> index) & 1);
	return (num);
}
