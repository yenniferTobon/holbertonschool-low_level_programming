#include "holberton.h"
#include <stdio.h>

void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			if (i < 10)
			{
				_putchar('0');
			}
			printf("%d", i);
			_putchar(':');
		 	if (j < 10)
			{
				_putchar('0');
			}
			printf("%d", j);
			_putchar('\n');
		}
	}
}
