#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a two dimensional array that wass previously created
 *
 * @grid: pointer to the array of pointers
 * @height: number of rows of the array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
