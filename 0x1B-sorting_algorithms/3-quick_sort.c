#include "sort.h"

/**
 * quick_sort - sorts array with qs algo
 * @size: size of array
 * @array: array
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2 || array == NULL)
	{
		return;
	}
	quicksort(array, 0, size - 1, size);
}

/**
 * quicksort - sorts array with qs algo
 * @array: array
 * @lo: start index of partition
 * @hi: end index of partition
 * @size: size of arr
 * Return: void
 */
void quicksort(int *array, int lo, int hi, size_t size)
{
	if (lo < hi)
	{
		int p = partition(array, lo, hi, size);

		quicksort(array, lo, p - 1, size);
		quicksort(array, p + 1, hi, size);
	}
}

/**
 * partition - sorts array with qs algo
 * @array: array
 * @lo: start index of partition
 * @hi: end index of partition
 * @size: size of arr
 * Return: void
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int pivote = array[hi], j = lo, temp, i;

	i = lo;

	while (j < hi)
	{
		if (array[j] <= pivote)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j++;
			if (i != j)
			{
				print_array(array, size);
			}
		}
		else
		{
			j++;
		}
	}
	temp = array[i];
	array[i] = array[hi];
	array[hi] = temp;
	if (i != hi)
		print_array(array, size);
	return (i);
}
