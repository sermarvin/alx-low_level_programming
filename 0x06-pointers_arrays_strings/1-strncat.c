#include "main.h"

/**
 * _strncat - concatenates two strings that uses at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes from src string
 *
 * Return: A string of characters
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;

	while (dest[destlen] != '\0')
		destlen++;

	for (srclen = 0; srclen < n; srclen++)
	{
		dest[destlen + srclen] = src[srclen];
	}

	return (dest);
}
