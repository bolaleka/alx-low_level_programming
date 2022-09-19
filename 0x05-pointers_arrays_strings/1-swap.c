#include "main.h"

/**
 * swap_int -  Function that swaps the values of two intgers
 * @a: First param
 * @b: Second param
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
