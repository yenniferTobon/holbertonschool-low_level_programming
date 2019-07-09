#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of a square matrix of integers
 * @a: number input
 * @size: zise input
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sumaM1 = 0, sumaM2 = 0;

	while (i < (size * size))
	{
		sumaM1 = sumaM1 + a[i];
		i = i + size + 1;
	}
	i = size -1;
	while (i < (size * size) - 1)
        {
                sumaM2 = sumaM2 + a[i];
                i = i + size - 1;
        }
	printf("%d, %d", sumaM1, sumaM2);
	printf("\n");
}
