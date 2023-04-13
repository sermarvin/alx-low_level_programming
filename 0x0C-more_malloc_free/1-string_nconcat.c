#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2
 *
 * Return: pointer to the newly allocated space
 * NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int str1len = 0;
	unsigned int str2len = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[str1len] != '\0')
		str1len++;
	while (s2[str2len] != '\0')
		str2len++;
	if (n < str2len)
		str2len = n;
	ptr = malloc(sizeof(char) * (str1len + str2len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < str1len; i++)
		ptr[i] = s1[i];
	for (j = 0; j < str2len; j++)
		ptr[str1len + j] = s2[j];
	ptr[str1len + str2len] = '\0';
	return (ptr);
}
