#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @old_size: size in bytes for the allocated space for ptr
 * @new_size: new size in bytes for the new memory block
 * @ptr: pointer to the memory previously allocated with malloc
 *
 * Return: ptr if new_size == old_size
 * NULL if new_size == 0 and ptr is not NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *newPtr;

	if (ptr == NULL)
	{
		newPtr = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	newPtr = malloc(new_size);
	if (newPtr == NULL)
	{
		free(newPtr);
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
	{
		*((char *)(newPtr) + i) = *((char *)(ptr) + i);
	}
	return (newPtr);
	free(ptr);
}
