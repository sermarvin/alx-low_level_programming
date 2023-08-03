#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: bit in question
 * @index: index starting from 0
 *
 * Return: Value of bit at index
 *         -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{

	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
