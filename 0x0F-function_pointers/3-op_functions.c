#include "3-calc.h"

/**
 * op_add - sum of two numbers
 * @a: integer
 * @b: integer
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two numbers
 * @a: integer
 * @b: integer
 *
 * Return: Difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two number
 * @a: integer
 * @b: integer
 *
 * Return: Product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - quotient of two numbers
 * @a: integer
 * @b: integer
 *
 * Return: Quotient
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Remainder of division
 * @a: integer
 * @b: integer
 *
 * Return: Remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
