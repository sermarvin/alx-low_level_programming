#include <stdio.h>

/**
  * main - prints a-z
  * Return: 0
  */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
