#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sorts array integers in ascending order with Bubble sort
 * @array: list the integers
 * @size: lenth array
 *
 **/
void bubble_sort(int *array, size_t size)
{
	size_t num_Elements_Sort = 0, i = 0;
	int item = 0;

	if (array == NULL || size == 0)
	{
		return;
	}

	while (num_Elements_Sort <= size)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				item = array[i];
				array[i] = array[i + 1];
				array[i + 1] = item;
				num_Elements_Sort = 0;
				print_array(array, size);
			}
			else
			{
				num_Elements_Sort = num_Elements_Sort + 1;

			}
		}
	}
}
