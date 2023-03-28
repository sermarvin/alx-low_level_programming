#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character from first followed by new line
 * @str: string
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		putchar(str[i]);
	putchar('\n');
}
