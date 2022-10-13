#include "main.h"
/**
 * *_strncat - Entry point
 * @dest: char *
 * @src: char *
 * @n: int
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
