#include "main.h"

/**
 * _islower - check for lowercase alphabet character
 * @c: used for arguement of the function
 *
 * Return: Always (0)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
