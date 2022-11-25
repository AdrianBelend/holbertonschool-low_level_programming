#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_dnodeint - Entry point
 * @head: pointer to pointer
 * @n: int
 * Return: 0
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

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
		(*head)->prev = new;
		new->prev = NULL;
		new->next = *head;
		*head = new;
	}
	return (new);
}
