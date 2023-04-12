#include "search_algos.h"
#include "stdio.h"

/**
 * binary_search - Search for a value  in a sorted array
 * @array: Array param
 * @size: Size of array
 * @value: Index to search for
 *
 * Return: Integer
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, low, high, mid;

	low = 0;
	high = size - 1;
	if (array == NULL || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		mid = (low + high) / 2;
		if (array[mid] == value)
		{
			return (mid);
		} else if (array[mid] < value)
		{
			low = array[mid] + 1;
		} else
			high = mid - 1;
	}
	return (-1);
}
