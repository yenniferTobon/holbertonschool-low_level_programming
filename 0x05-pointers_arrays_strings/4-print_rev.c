#include "holberton.h"

/**
 * print_rev - prints a string, in reverse
 * @s: char input to reverse
 */

void print_rev(char *s)
{
	int i = 0, tamano = 0;

	while (i != -1)
	{
		if (*(s + i) != '\0')
			tamano = tamano + 1;
		else
		{
			i = -1;
			break;
		}
		i = i + 1;
	}
	for (i = tamano - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
