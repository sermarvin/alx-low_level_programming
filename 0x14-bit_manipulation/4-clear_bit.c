#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0 and index
 * @n: bit to be cleared
 * @index: index starting from 0
 *
 * Return: 1 on success
 *         -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
