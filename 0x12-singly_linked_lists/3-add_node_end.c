#include "lists.h"

/**
 * add_node_end - adds new node at end of list_t
 * @head: head of the linked list
 * @str: string to dupliate
 *
 * Return: address of the new element
 * NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *current_node;
	size_t n;

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);

	end_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	end_node->len = n;
	end_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = end_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next =  end_node;
	}
	return (*head);
}
