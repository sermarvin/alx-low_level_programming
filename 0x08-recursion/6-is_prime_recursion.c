#include "main.h"
#include <math.h>

int check_prime(int, int);

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise returns 0
 * @n: number
 *
 * Return: 1 if the input integer is a prime number
 * otherwise 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, n - 1));
}

/**
 * check_prime - checks prime numbers
 * @n: number
 * @i: iterator
 *
 * Return: 1 if the input integer is a prime number
 * otherwise 0
 */

int check_prime(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check_prime(n, i - 1));
}
