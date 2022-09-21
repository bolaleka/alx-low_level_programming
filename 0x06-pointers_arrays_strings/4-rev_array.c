#include "main.h"

/**
 * reverse_array - function that reverse the content of array of integers
 * @a: first param
 * @n: second param
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
