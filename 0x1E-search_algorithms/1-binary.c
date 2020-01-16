#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - sorted array of integers using the Binary search algorithm
 * @array: sorted in ascending order
 * @size: size is the number of elements in array
 * @value: value is the value to search for
 * Return: return the index where value is located
 **/

int binary_search(int *array, size_t size, int value)
{
	size_t medium = 0, right = size - 1, aux = 0, left = 0;

	while (left <= right)
	{
		printf("Searching in array:");
		for (size_t iterator = aux; iterator < size; iterator++)
		{
			printf(" %d", array[iterator]);
			if (iterator != size - 1)
			{
				printf(",");
			}
		}

		printf("\n");
		medium = (left + right) / 2;
		if (array[medium] == value)
		{
			return (medium);
		}
		else if (value > array[medium])
		{
			left = medium + 1;
			aux = medium + 1;
		}
		else
		{
			right = medium - 1;
			size = medium;
		}
	}
	return (-1);
}
