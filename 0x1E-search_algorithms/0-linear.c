#include "search_algos.h"

/**
 * linear_search - Function search a value in an array
 * @array: Arrays param
 * @size: Array size
 * @value: index value to search for
 *
 * Return: integer
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
