#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements in the array
 *
 * return: array in the reverse order
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = n - 1; i > n/2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
