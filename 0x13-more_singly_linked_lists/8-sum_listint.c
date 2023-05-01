#include "lists.h"

/**
 * sum_listint - sums all the data(n) of a listint_t linked list
 * @head: first node of a linked list
 *
 * Return: sum of data(n)
 * 0 if the list is empty
*/

int sum_listint(listint_t *head)
{
	listint_t *curr;
	int sum = 0;

	curr = head;
	if (head == NULL)
		return (0);
	while (curr != NULL)
	{
		sum = sum + curr->n;
		curr = curr->next;
	}
	return (sum);
}
