#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: first element of a list
 * @index: the index of the node, starting at 0
 *
 * Return: a node
 * NULL if the node does not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr;
	unsigned int counter = 0;

	curr = head;
	while (curr != NULL)
	{
		if (counter != index)
		{
			counter++;
			curr = curr->next;
		}
		else
		{
			break;
		}
	}
	return (curr);
}
