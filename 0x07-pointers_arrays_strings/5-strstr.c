#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: The string in question
 * @needle: The string to be used in the search
 *
 * Return: pointer to start of substring, NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	while (*haystack != '\0')
	{
		for (index = 0; needle[index] != '\0'; index++)
		{
			if (haystack[index] != needle[index])
			{
				break;
			}
		}
		if (needle[index] == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
