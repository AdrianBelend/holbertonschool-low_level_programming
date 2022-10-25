#include "main.h"
#include <stdlib.h>
/**
 * _strdup : Entry point
 * @str: char *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i;
	unsigned int j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
	p = malloc(sizeof(char) * i + 1);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
