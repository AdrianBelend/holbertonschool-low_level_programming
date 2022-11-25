#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_dnodeint_end - Entry point
 * @head: pointer to pointer
 * @n: int
 * Return: 0
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *a;

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
