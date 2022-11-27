#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Entry point
 * @head: pointer
 * @index: uint
 * Return: 0
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int c;
	dlistint_t *new;

	if (*head == NULL || head == NULL)
	return (-1);
	if (index == 0)
	{
		new = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(new), new = NULL;
		return (1);
	}
	c = 1, new = (*head)->next;
	if (new)
	{
		while (new->next)
		{
			if (index == c)
			{
				new->prev->next = new->next;
				new->next->prev = new->prev;
				free(new), new = NULL;
				return (1);
			}
			c++, new = new->next;
		}
	}
	if (new && index == c)
	{
		new->prev->next = NULL;
		free(new);
		return (1);
	}
	return (-1);
}
