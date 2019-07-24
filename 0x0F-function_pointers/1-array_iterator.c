
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that prints a name
 * @array: name array
 * @size: size array
 * @action: argument function with function
 * Return: void
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL || size == 0 || array == 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
