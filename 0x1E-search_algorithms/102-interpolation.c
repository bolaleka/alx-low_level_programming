#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array: Array pararm
 * @size: Array size
 * @value: Index to search for
 *
 * Return: Integer
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	int cmp;

	if (array == NULL || size == 0)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		cmp = value - array[pos];

		if (cmp == 0)
		{
			return (pos);
		} else if (cmp < 0)
		{
			high = pos - 1;
		} else
			low = pos + 1;
	}
	return (-1);
}
