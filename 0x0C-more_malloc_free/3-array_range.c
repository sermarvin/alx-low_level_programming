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

	if (min > max)
		return (NULL);
	newArray = malloc(sizeof(int) * ((max - min) + 1));
	if (newArray == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		newArray[i] = i;
	}
	return (newArray);
}
