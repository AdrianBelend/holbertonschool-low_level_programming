#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Entry point
 * @head: pointer to pointer
 * @str: pointer
 * Return: 0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));
	int l = 0;

	if (n == NULL)
		return (NULL);
	for (;str != NULL && str[l] != '\0';l++)
		;
	n->str = strdup(str);
	if (n->str == NULL)
		return (NULL);
	n->len = l;

	if (*head == NULL)
	{
		*head = n;
	}
	else
	{
		n->next = *head;
		*head = n;
	}
	return (n);
}
