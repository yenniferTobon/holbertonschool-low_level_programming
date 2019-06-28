#include "holberton.h"

/**
 * print_square - function that prints a square
 * @size: The number of interactions
 */

void print_square(int size)
{
	int i, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (m = 1; m <= size + 1; m++)
			{
				if (m < size + 1)
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}

