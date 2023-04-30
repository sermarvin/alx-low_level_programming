#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the first node
 *
 * Return: Nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *free_ptr;

	if (head == NULL)
		return;
	while (curr != NULL)
	{
		free_ptr = curr;
		curr = curr->next;
		free(free_ptr);
	}
	*head = NULL;
}
