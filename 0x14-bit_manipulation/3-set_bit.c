#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at index
 * @n: bit
 * @index: index starting at 0 of the bit you want to set
 *
 * Return: 1 on success
 *         -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
