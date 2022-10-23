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
	unsigned int i = 0;

	a = malloc (sizeof(char) * size);

	if (size == 0 || a == NULL)
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
