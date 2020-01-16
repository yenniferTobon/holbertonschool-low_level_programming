#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches a value with Linear search algorithm
 * @array: sorted in ascending order
 * @size: size is the number of elements in array
 * @value: value is the value to search for
 * Return: return the index where value is located
 **/

int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] != value)
		{
			printf("Value checked array[%lu] = %d\n", i, array[i]);
		}
		else if (array[i] == value)
		{
			printf("Value checked array[%lu] = %d\n", i, array[i]);
			return (i);
		}
	}
	return (-1);
}
