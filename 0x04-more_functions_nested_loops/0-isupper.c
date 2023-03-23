#include "main.h"
/**
 * _isupper - checks if character is uppercase
 * @c: character to be checked
 * Return: 1 if c is uppercase and 0 if lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
