#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Entry point
 *@min: int
 *@max: int
 *Return: 0
 */

int *array_range(int min, int max)
{
	int i, o;

	int *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));

	o = (max - min + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < o; i++)
	{
		p[i] = min++;
	}
	return (p);
}
