#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @s: char input
 */

void puts2(char *str)
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
	for (i = 0; i <= tamano - 1; i++)
	{
		_putchar(*(str + i));
		i = i + 1;
	}
	_putchar('\n');
}

