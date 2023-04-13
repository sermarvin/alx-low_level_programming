#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size to be checked
 *
 * Return: pointer to the allocated memory
 * If malloc fails, terminate with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *newPointer;

	newPointer = malloc(b);
	if (newPointer == NULL)
	{
		exit(98);
	}
	return (newPointer);
}
