#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to a new list
 *
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", 0, "(nill)");
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
