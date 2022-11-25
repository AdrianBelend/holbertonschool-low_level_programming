#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_dlistint - Entry point
 * @head: pointer to pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *n;

	while (head != NULL)
	{
		n = head->next;
		free(head);
		head = n;
	}
}
