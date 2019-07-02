#include "holberton.h"
#include <stdio.h>

/**
 * print_array -n elements of an array of integers
 * @n: array size
 * @a: array pointer
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
	}
	printf("\n");
}
