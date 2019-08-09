#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n:
 * @index:
 * Return: int
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long num;

	if (index > n)
		return (-1);

	num = ((n>>index) & 1);
	return (num);
}
