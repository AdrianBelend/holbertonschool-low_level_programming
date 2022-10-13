#include "main.h"
/**
 * *_strncpy - Entry point
 * @dest: char *
 * @src: char *
 * @n: int
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		a++;
		dest[a] = src[a];
	}
	while (a < n)
	{
		dest[a] = '\0';
	}
	return (dest);
}
