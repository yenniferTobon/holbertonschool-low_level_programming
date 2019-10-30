#include "sort.h"

/**
 * selection_sort - sorts array of integers, ascending order - Selection sort
 * @array: input array
 * @size: size array
 *
 **/

void selection_sort(int *array, size_t size)
{
	int minimum, temp = 0, aux = 0;
	size_t i = 0, position;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (position = 0; position < size; position++)
	{
		minimum = array[position];

		for (i = position + 1; i < size; i++)
		{
			if (array[i] <= minimum)
			{
				minimum = array[i];
				aux = i;
			}
		}
		if (minimum != array[position])
		{
			temp = array[position];
			array[position] = minimum;
			array[aux] = temp;
			print_array(array, size);
		}
	}

}
