#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Entry point
 * @width: int
 * @height: int
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **p;

	p = malloc(sizeof(int *) * width);

	for (i = 0; i < width; i++)
	{
		p[i] = malloc(sizeof(int) * height);
	}
	return (p);
}
