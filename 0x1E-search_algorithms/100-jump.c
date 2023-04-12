#include "search_algos.h"

/**
 * jump_search - Jump search algorithm to search for value
 * @array: Array param
 * @size: Array size
 * @value: Array index to search
 *
 * Return: Integer
 */
int jump_search(int *array, size_t size, int value)
{
	size_t x, i, m;

	if (array == NULL || size == 0)
		return (-1);

	m = sqrt(size);
	i = 0;
	while (array[m] <= value && m < size)
	{
		i = m;
		m += sqrt(size);
		if (m > size - 1)
			return (-1);
	}
	for (x = i; x < m; x++)
	{
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
