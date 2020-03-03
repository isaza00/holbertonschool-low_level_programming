#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - isdigit
 * @grid: integer
 * @height: integer
 * Return: free a grid doble pointer
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

