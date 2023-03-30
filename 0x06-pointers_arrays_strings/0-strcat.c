#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: source string
 * @dest: destination string
 *
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;
	int i = 0;

	while (dest[len1] != '\0')
		len1++;

	while (src[len2] != '\0')
		len2++;

	for (i = 0; i < len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	dest[len1 + len2] = '\0';

	return (dest);
}
