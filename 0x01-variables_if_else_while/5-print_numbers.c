#include <stdio.h>

/**
 * main - prints all the single digit numbers of base 10
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
