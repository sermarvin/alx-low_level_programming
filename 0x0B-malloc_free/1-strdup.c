#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a copy to newly allocated space
 * @str: string in memory
 *
 * Return: pointer to the new string
 * NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *newString;
	int size = 0;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
	{
		size++;
	}
	size++;
	newString = malloc(sizeof(*newString) * size);
	if (newString == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		newString[i] = str[i];
	}
	return (newString);
}
