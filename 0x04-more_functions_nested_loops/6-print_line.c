#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: The number of times the character _ should be printed
 *
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n >  0)
	{
		i = 0;
		while (i < n)
		{
			_putchar(95);
			i++;
		}
		_putchar(10);
	}
	else
		_putchar(10);
}
