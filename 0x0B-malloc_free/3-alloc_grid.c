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

	if (width <= 0 || height <= 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < height; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}


