#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: void
 */

void main(void)
{
	int i = 0;
	int sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
}
