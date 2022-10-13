#include "main.h"
/**
 * *_strcat - Entry point
 * @dest: char *
 * @src: char *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while ((dest[b + a] = *src++) != '\0')
	{
		b++;
	}
	return (dest);
}
