#include "function_pointers.h"

/**
 * array_iterator - function that execute a funtion
 * @array: array input
 * @size: array size
 * @action: call back function
 *
 * void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
