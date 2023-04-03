#include "main.h"

/**
 * _memset - fills memory with a contant byte
 * @s: Pointer
 * @b: byte that fills the memory
 * @n: size of the bytes to be filled by the byte b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
