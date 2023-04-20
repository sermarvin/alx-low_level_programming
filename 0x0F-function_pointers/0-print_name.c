#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to a string containing the name
 * @f: function pointer to a function that contains charaacter
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	void (*f_pointer)(char *);

	f_pointer = f;
	f_pointer(name);
}
