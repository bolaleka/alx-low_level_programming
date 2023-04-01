#include "function_pointers.h"

/**
 * int_index - Function searches for an intger
 * @array: array input
 * @size: number of element in array
 * @cmp: pointer to the function
 *
 *Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
