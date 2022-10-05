#include "main.h"

/**
 * free_grid - Function frees 2 dimenttional grid
 * @grid: first param
 * @height: second param
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
