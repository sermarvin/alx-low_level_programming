#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * print all the letters except q and e
 *
 * Return: 0
 */

int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		if (chr != 'e' && chr != 'q')
		{
			putchar(chr);
		}
	}
	putchar('\n');
	return (0);
}
