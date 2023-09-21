#include "lists.h"

/**
 * list_len - determinelinked list length
 * @h: pointer to first node
 * Return: list size
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
