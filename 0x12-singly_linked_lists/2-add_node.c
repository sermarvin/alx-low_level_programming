#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer that points to the first node
 * @str: string element of the node
 *
 * Return: address of the new element
 * NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t strlength = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	while (str[strlength])
	{
		strlength++;
	}
	new_node->len = strlength;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
