#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to a list of type listint_t
 *
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int node_counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_counter++;
		h = h->next;
	}
	return (node_counter);
}
