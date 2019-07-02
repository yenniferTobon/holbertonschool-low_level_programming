#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @s: char input
 */

void puts_half(char *str)
{
	int i = 0, tamano = 0;

	while (i != -1)
	{
		if (*(str + i) != '\0')
		{
			tamano = tamano + 1;
		}
		else
		{
			i = -1;
			break;
		}
		i = i + 1;
	}

	i = tamano / 2;

	while (i <= tamano -1 )
	{
		_putchar(*(str + i));
		i = i + 1;
	}
	_putchar('\n');
}
