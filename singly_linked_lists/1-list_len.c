#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - Entry point
 * @h: pointer
 * Return: 0
 */
size_t list_len(const list_t *h)
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
