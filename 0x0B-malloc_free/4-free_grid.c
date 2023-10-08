#include "main.h"
/**
 * free_grid - funtion
 *
 * @grid: int
 * @height: int
 *
 * Return: always 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

