#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - isdigit
 * @width: integer
 * @height: integer
 * Return: prints alphabet
 */
int **alloc_grid(int width, int height)
{
	int **arr = (int **)malloc(height * sizeof(int *));
	int i = 0;
	int j = 0;

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}


