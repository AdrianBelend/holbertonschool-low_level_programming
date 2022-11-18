#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Entry point
 * @head: pointer to pointer
 * @str: pointer
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = node->next;
		free (node);
		*head = *node;
	}
}
