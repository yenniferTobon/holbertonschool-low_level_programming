#include "holberton.h"
#include <stdio.h>

/**
* print_times_table - prints the n times table, starting with 0
* @n: integer input
* Return: 0
*/

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int mult, i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mult = i * j;
				if (mult > 99)
				{
					_putchar(mult / 100 + '0');
					_putchar(mult % 100 / 10 + '0');
					_putchar(mult % 100 % 10 + '0');
				}
				else if (mult > 9)
				{
					_putchar(' ');
					_putchar(mult / 10 + '0');
					_putchar(mult % 10 + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(mult + '0');
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
