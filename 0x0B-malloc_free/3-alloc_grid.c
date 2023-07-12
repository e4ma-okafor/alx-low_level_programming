#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the width of array
 * @height: the heigth of array
 * Return: pointer or null on failure
 */

int **alloc_grid(int width, int height)
{
	int **arrgrid;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	arrgrid = malloc(height * sizeof(int *));
	if (arrgrid == NULL)
	{
		free(arrgrid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arrgrid[i] = malloc(width * sizeof(int));
		if (arrgrid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(arrgrid[i]);
			free(arrgrid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arrgrid[i][j] = 0;

	return (arrgrid);
}
