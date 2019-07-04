#include "holberton.h"
/**
 * reverse_array - reverses an array of integers
 * @n: array a change
 * @a: num elements of the array
 */
void reverse_array(int *a, int n)
{
	int aux[n];
	int i = 0, j = 0, l = n;

	for (i = 0; i < n; i++)
	{
		l = l - 1;
		aux[i] = *(a + l);
	}
	for (j = 0; j < n; j++)
	{
		*(a + j) = aux[j];
	}
}
