#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 * Does not print 2 and 4
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		if ((n != 50) && (n != 52))
		{
			_putchar(n);
			n++;
		}
		else
			n++;
	}
	_putchar(10);
}
