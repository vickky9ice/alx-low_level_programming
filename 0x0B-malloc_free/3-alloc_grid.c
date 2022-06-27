#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**Author: Adeboye Victor Oyekanmi*/

/**
 * alloc_grid - entry point.
 * @width: colums of the array.
 * @height: rows of the array.
 * Return:  An array of two dimensional.
 */
int **alloc_grid(int width, int height)
{
	int **m;
	int a, x, y;
	
	if (width <= 0 || height <= 0)
		return (NULL);
	/* Assign memory at the rows */
	m = (int **) malloc(height * sizeof(int *));
	if (m == NULL)
	{
		free(m);
		return (0);
	}
	/**Assign memory to each element*/
	for (a = 0; a < height; a++)
	{
		m[a] = (int *) malloc(width * sizeof(int));
		if (m[a] == NULL)
		{
			for (; a >= 0; a--)
				free(m[a]);
			free(a);
			return (0);
		}
	}
	/**Initialize each element*/
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			m[x][y] = 0;
		}
	}
	return (m);
}
