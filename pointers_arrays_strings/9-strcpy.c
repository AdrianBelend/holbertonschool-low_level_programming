#include "main.h"
/**
 * *_strcpy - Entry level
 * @dest: char *
 * @src: char *
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	for (; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
