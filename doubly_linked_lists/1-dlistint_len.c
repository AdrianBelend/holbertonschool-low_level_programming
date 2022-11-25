#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len - Entry point
 * @h: pointer
 * Return: 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	int c = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
