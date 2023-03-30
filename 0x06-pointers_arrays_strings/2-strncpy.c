#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string to be copied
 * @n: Number of characters to be copied
 *
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
