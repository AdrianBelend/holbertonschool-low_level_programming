#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Entry point
 * @str: char *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *h = NULL;

	unsigned int i;

	if (str == NULL)
		return (NULL);

	h = malloc((sizeof(char) * strlen(str)) + 1);

	i = 0;

	if (h == NULL)
		return (NULL);
	if (*str == '\0')
	{
		*h = '\0';
		return (h);
	}
	for (i = 0; i < strlen(str); i++)
	{
		h[i] = str[i];
		if (h[i] == '\0')
		{
			return (NULL);
		}
	}

	return (h);
}
