#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - Entry point
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	p = malloc(sizeof(size) * nmemb);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		p[i] = 0;
	}
	return (p);
}
