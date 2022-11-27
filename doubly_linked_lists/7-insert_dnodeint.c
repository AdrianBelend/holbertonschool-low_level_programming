#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - Entry point
 * @h: pointer
 * @idx: uint
 * @n: int
 * Return: 0
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *tmp, *new, *tmp_prev;

	if (h == NULL && idx > 0)
	return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n, new->prev = new->next = NULL;

	if (idx == 0)
	{
		if (*h)
	{
		new->next = *h;
		(*h)->prev = new, *h = new;
	}
		else
			*h = new;
		return (new);
	}
	count = 1, tmp = (*h)->next;
	while (tmp)
	{
		if (idx == count)
		{
			tmp->prev->next = new, new->prev = tmp->prev;
			new->next = tmp, tmp->prev = new;
			return (new);
		}
		count++;
		tmp_prev = tmp;
		tmp = tmp->next;
	}
	if (tmp == NULL && count == idx)
	{
		tmp_prev->next = new, new->prev = tmp_prev;
		return (new);
	}
	free(new);
	return (NULL);
}
