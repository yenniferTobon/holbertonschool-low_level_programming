#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c The number to be checked
 * Return: last digit of a number
 */

int print_last_digit(int c)
{
	int  result = 0;

	result = c % 10;

	if (result < 0)
	{
		result = -result;
	}
	_putchar(result + 48);
	return (result);
}
