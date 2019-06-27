#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 */
void more_numbers(void)
{
	int i, j, seg, m, most;

	for (j = 1; j <= 10; j++)
	{
		for (i = 48; i <= 57; i++)
		{
			_putchar(i);
		}

		for (seg = 10; seg <= 14; seg++)
		{
			for (m = 1; m <= 2; m++)
			{
				if (m == 1)
				{
					most = 49;
				}
				else
				{
					most = ((seg % 10) + '0');
				}
				_putchar(most);
			}
		}
		_putchar('\n');
	}
}
