#include "main.h"
/**
 * *_memcpy - Entry point
 * @dest: char *
 * @src: char *
 * @n: unsigned int
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}

