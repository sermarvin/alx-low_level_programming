#include "lists.h"

/**
 * print_list - prints elements of a list_t list
 * @h: singly linked list
 *
 * Return: number of elements in list
 */

size_t print_list(const list_t *h)
{
	size_t newlength;

	newlength = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		newlength++;
	}
	return (newlength);
}
