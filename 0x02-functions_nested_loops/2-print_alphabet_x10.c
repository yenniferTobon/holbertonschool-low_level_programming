#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{
	int n = 0;
	int i = 0;

	for (n = 1; n <= 10; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
