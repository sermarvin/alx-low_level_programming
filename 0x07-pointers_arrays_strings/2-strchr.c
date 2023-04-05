#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string of characters
 * @c: character in check
 *
 * Return: pointer to the character c in check
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
	}
	return (0);

}
