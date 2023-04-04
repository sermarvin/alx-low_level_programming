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

	while (*needle != '\0')
	{
		for (index = 0; haystack[index] != '\0'; index++)
		{
			if (*needle == haystack[index])
			{
				return (needle);
				needle++;
				break;
			}
		}
	}
	return (0);
}
