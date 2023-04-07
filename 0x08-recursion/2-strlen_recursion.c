#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: The string in question
 *
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	if (*s != '\0')
	{
		len++;
		return (len + _strlen_recursion(s + 1));
	}
	return (len);
}
