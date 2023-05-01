#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: first node of the list
 *
 * Return: head node's data(n)
 * 0 if the linked list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		n = (*head)->n;
		*head = (*head)->next;
		free(temp);
		return (n);
	}
}
