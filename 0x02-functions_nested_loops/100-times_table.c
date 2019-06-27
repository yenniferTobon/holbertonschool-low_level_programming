#include "holberton.h"
#include <stdio.h>

void print_times_table(int n)
{
	int i = 0, j = 0, mult = 0;
	if (n < 16 && n > -1)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			mult = i * j;
			if (mult < 10)
			{
				printf("%d", mult);
				printf("  ");
			}
			else if (mult < 100)
			{
				printf("%d", mult);
				printf(" ");
			}
			else
			{
				printf("%d", mult);
				printf("     ");
			}
		}
		printf("\n");
	}
	}
}
