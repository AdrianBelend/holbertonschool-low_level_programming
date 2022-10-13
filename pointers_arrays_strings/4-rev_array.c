#include "main.h"
/**
 * reverse_array - Entry point
 * @a: int *
 * @n: int
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int b;
	int tmp = a[0];

	for (b = 0; b < n; b++)
	{
		n--;
		tmp = a[b];
		a[b] = a[n];
		a[n] = tmp;
	}
}
