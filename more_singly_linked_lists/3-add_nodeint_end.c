#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint_end - Entry point
 * @head: pointer to pointer
 * @n: int
 * Return: 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *a;

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		a = *head;
		while (a->next)
			a = a->next;
		a->next = new;
	}
	return (new);
}
