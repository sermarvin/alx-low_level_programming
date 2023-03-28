#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: array of strings
 *
 * Return: integer
 */

int _strlen(char *s)
{
	int strlength;

	strlength = 0;
	while (*(s + strlength) != '\0')
	{
		strlength++;
	}
	return (strlength);
}
