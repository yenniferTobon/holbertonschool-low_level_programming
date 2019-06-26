#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 */

void times_table(void)
{
	int i = 0, j = 0, num = 0;

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 0; j <= 9 ; j++)
		{
			num = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			else if (num < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((num % 10) + '0');
			}
			else
			{
				_putchar((num % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
