#include "lists.h"

/**
 * add_node - adds a node to the list start
 * @head: the pointer address to head node
 * @str: str list size
 * Return: list size
 */

list_t *add_node_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (!head || new_head)
		return (NULL);
	if (str)
	{
		new_head->str = strdup(str);
		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}
		new_head->len = strlen(new_head->str);
	}

	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
