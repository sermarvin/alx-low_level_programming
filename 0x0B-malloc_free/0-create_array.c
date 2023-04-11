#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of char
 * it initializes it with a specific char
 * @size: size of the array
 * @c: character that initializes the array
 *
 * Return: NULL if size is 0 or if it fails, a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *newArray;

	if (size == 0)
		return (NULL);
	newArray = malloc(sizeof(char) * size);
	if (newArray == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		newArray[i] = c;
	}
	return (newArray);
}
