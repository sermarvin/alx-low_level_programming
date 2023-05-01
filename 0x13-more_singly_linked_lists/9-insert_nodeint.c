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
	else if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (curr->next != NULL)
		{
			if (counter != idx - 1)
			{
				counter++;
				curr = curr->next;
			}
			else if (curr->next == NULL)
			{
				new_node->next = NULL;
			}
			else
			{
				new_node->next = curr->next;
				break;
			}
		}
		curr->next = new_node;
	}
	return (new_node);
}
