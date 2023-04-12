#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: size of dimension 1
 * @height: size of dimension 2
 *
 * Return: pointer to the array
 * NULL on failure
 * NULL if width or height is 0
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **newArray;

	if (width == 0 || height == 0)
		return (NULL);
	newArray = malloc(sizeof(int) * height);
	if (newArray == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		newArray[i] = malloc(sizeof(int) * width);
		if (newArray[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(newArray[j]);
			free(newArray);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			newArray[i][j] = 0;
		}
	}
	return (newArray);
}
