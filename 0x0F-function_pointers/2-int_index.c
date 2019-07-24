#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: name array
 * @size: size array
 * @cmp: argument function with function
 * Return: void
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, equal = 0, result = 0;

	if (size <= 0 || cmp == NULL || array == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		equal = cmp(array[i]);
		if (equal != 0)
		{
			result = i;
			break;
		}
		else
			result = -1;
	}
	return (result);
}

