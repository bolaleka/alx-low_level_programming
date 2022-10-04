#include "main.h"
#include "./2-strlen.c"

/**
 * alloc_grid - Function return a pointer to a 2d array
 * @width: input width
 * @height: input height
 *
 * Return: integer
 */
int **alloc_grid(int width, int height)
{
	int **m, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	m = (int **)malloc(width * sizeof(int *));
	if (m == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		*(m + i) = (int *)malloc(height * sizeof(int));
		for (j = 0; j < height; j++)
		{
			m[i][j] = 0;
		}
	}
	return (m);
}
