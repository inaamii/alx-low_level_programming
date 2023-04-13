#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function taht returns a pointer to 2 dimensional
 *
 * @width : width of the grid
 * @height : height of the grid
 *
 * Return: return NULL on failure,
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **g;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}

	g = malloc(height * sizeof(int));

	if (g == NULL)
	{
		return (NULL);
	}
		for (i = 0; i < height; i++)
		{
			g[i] = malloc(width * sizeof(int));
				if (g[i] == NULL)
				{
				free(g);
				return (NULL);
				}
		for (j = 0; j < width; j++)
		{
			g[i][j] = 0;
		}
		}
		return (g);

}
