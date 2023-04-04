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
	while (*s != '\0')
	{
		if (*s == c)
		{
			break;
		}
		s++;
	}
	return (s);
}
