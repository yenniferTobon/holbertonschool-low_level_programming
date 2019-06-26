#include "holberton.h"
#include <stdio.h>

/**
 * void print_to_98 - prints all natural numbers from n to 98
 * @n: number input star
 *
 */

void print_to_98(int n)
{
	int num = n;

	if (num == 98)
	{
		printf("%d", num);
	}
	else
	{
		printf("%d ", num);
	}

	while (num != 98)
	{
		if (num > 98)
		{
			num = num - 1;
		}
		else
		{
			num = num + 1;
		}

		if (num != 98)
		{
			printf("%d, ", num);
		}
		else
		{
			printf("%d", num);
		}
	}
	printf("\n");
}
