#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: The number of interactions
 */

void print_diagonal(int n)
{
	int i, m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (m = 1; m <= i + 1; m++)
			{
				if (m == i)
					_putchar(92);
				else if (m < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

