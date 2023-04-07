#include "main.h"
#include <math.h>

int _sqrt(int, int);

/**
 * _sqrt_recursion - returns the natural squareroot of a number
 * @n: parameter to be squarerooted
 *
 * Return: Squareroot of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive squareroot
 * @n: number
 * @i: iterator
 *
 * Return: A number
 */

int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
