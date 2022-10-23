#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 * @size: unsignetd int
 * @c: char
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
