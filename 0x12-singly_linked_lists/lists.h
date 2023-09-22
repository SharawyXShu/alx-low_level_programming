#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - linked list in singlee mode
 * @str: string
 * @len: string length
 * @next: points to the next node
 * Description: single linked list node structure
 * for Holb Proj
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
void free_list(list_t *head);

#endif