#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - Entry point
 * @h: pointer
 * Return: 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	int c = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
