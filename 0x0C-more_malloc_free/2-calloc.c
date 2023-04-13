#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: number of bytes for each element
 * The memory is set to 0
 *
 * Return: pointer to the allocated memory
 * NULL if nmemb or size is 0
 * NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*((char *)(ptr) + i) = 0;
	return (ptr);
}
