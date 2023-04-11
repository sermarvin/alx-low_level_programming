#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers, prints the results
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Multiple of two number, ERROR if program did not receive 2 arguments
 */

int main(int argc, char *argv[])
{
	int sum;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	sum = num1 * num2;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("Value of argc is %d\n", argc);
		printf("%d\n", sum);
		return (0);
	}
}
