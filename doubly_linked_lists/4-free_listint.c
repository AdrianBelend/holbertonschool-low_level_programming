#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_listint - Entry point
 * @head: pointer to pointer
 */
void free_listint(listint_t *head)
{
	listint_t *n;

	while (head != NULL)
	{
		n = head->next;
		free(head);
		head = n;
	}
}
