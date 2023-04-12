#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to newly allocated space
 * empty string if NULL is passed
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *newString;
	int size1 = 0;
	int size2 = 0;
	int i, j, newSize;

	if (s1 == NULL)
		*s1 = "";
	if (s2 == NULL)
		*s2 = "";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	newSize = size1 + size2 + 1;
	newString = malloc(sizeof(char) * newSize);
	if (newString == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		newString[i] = s1[i];
		for (j = 0; j < size2; j++)
		{
			newString[size1 + j] = s2[j];
		}
	}
	newString[size1 + size2] = '\0';
	return (newString);
}
