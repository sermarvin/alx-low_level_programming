#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array parameter
 * @n: number of elements
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);
	}
	putchar('\n');
}
