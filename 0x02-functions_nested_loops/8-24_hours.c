ç#include "holberton.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 */

void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
