#include "holberton.h"

/**
 * print_alphabet - prints the alphabet
 * Return: void
 */

void print_alphabet(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
