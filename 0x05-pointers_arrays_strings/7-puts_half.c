#include "holberton.h"

/**
 * puts_half - half of a string
 * @str: char input
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

	tamano = tamano - 1;
	if ((tamano / 2) == 0)
	{
		i = tamano / 2;
		while (i < tamano)
		{
			i = i + 1;
			_putchar(*(str + i));
		}
	}
	else
	{
		i = (tamano - 1) / 2;
		while (i < tamano)
		{
			i = i + 1;
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
