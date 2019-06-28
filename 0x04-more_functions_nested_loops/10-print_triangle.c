#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: The number of interactions
 */

void print_triangle(int size)
{
	int i, m, contador;

	if (size <= 0)
	{
		_putchar('#');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (m = 0; m < size; m++)
			{
				contador = size - i - 1;

				if (m < contador)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}

