#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_list - Entry point
 * @head: pointer to pointer
 */
void free_list(list_t *head)
{
	list_t *node = head;

	while (head)
	{
		head = head->next;
		free(node->str);
		free(node);
		node = head;
	}
}
