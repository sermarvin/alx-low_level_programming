#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: start of array
 * @max: end of array
 *
 * Return: pointer to the newly created array
 * NULL if min > max
 * NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int i;
	int *newArray;
	int size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	newArray = malloc(sizeof(int) * size);
	if (newArray == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		newArray[i] = min;
		min++;
	}
	return (newArray);
}
