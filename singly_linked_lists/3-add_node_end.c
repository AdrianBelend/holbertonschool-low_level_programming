#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Entry point
 * @head: pointer to pointer
 * @str: pointer
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));
	list_t *a;
	int l = 0;

	if (n == NULL)
	{
		free(n);
		return (NULL);
	}
	for (; str != NULL && str[l] != '\0'; l++)
		;
	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}
	n->len = l;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
	}
	else
	{
		a = *head;
		while (a->next)
			a = a->next;
		a->next = n;
	}
	return (n);
}
