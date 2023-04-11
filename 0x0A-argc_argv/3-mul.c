#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two number
 * print the result, followed by a new line
 * If the program does not receive two arguments,
 * your program should print Error, followed by a new line,
 * and return 1
 * @argc: argc parameter
 * @argv: listed array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
