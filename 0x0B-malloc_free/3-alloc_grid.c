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
	m = malloc(sizeof(int *) * height);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		m[i] = malloc(sizeof(int) * width);
		if (m[i] == NULL)
		{
			while (i >= 0)
			{
				free(m[i]);
				i--;
			}
			free(m);
			return (m);
		}
		for (j = 0; j < width; j++)
		{
			m[i][j] = 0;
		}
	}
	return (m);
}
