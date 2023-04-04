#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes from memory area of src to copy to dest
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];

	}
	return (dest);
}
