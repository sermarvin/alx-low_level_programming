#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the first node of a listint_t linked list
 * @idx: index where the new node is added
 * @n: value of n of the new node
 *
 * Return: address of the new node
 * NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr = *head;
	unsigned int counter = 0;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (curr != NULL)
		{
			if (counter == idx)
			{
				new_node->next = curr->next;
				curr->next = new_node;
				new_node = curr->next;
				break;
			}
			counter++;
			curr = curr->next;
		}
		if (idx > counter)
		{
			new_node = NULL;
		}
	}
	return (new_node);
}
