#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 *
 * Return: 0
 * Uses the character # to print the square
 */

void print_square(int size)
{
	int l, w;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (w = 0; w < (size - 1); w++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
