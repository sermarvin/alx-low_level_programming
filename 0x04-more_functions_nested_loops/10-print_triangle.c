#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size parameter of a triangle
 * Return: Nothing
 */

void print_triangle(int size)
{
	int b, h;

	if (size > 0)
	{
		for (b = 1; b <= size; b++)
		{
			for ((h = size - b); h > 0; h--)
			{
				_putchar(' ');
			}
			for (h = 0; h < b; h++)
			{
				_putchar('#');
			}
			if (b == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
