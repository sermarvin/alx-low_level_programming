#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial string
 * @accept: substring
 *
 * Return: number of bytes in the initial string s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int segment = 0;
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				segment++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (segment);
		}
		s++;
	}
	return (segment);
}
