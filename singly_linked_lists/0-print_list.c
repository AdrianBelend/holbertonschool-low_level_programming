#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - Entry point
 * @h: pointer
 * Return: 0
 */
size_t print_list(const list_t *h)
{
	int c;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		c++;
	}
	return (c);
}
