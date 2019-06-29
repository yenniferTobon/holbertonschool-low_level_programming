#include "holberton.h"
#include <stdio.h>

/**
 * print_number - print int with _putchar
 * @num: number int input
 * Return: void
 */

void print_number(int num)
{
	unsigned int numMax = 0;

	if (num % 10 < 0)
	{
		_putchar('-');
		numMax = -num;
	}
	else
	{
		numMax = num;
	}
	if (numMax < 10)
		_putchar('0' + (numMax % 10));
	else
	{
		print_number(numMax / 10);
		_putchar('0' + numMax % 10);
	}
}
