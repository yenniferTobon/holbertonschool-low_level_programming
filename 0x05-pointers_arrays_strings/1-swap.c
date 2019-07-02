#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: number 1 int input
 * @b: unmber 2 int input
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
