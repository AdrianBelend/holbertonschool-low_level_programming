#include "main.h"
#include <stddef.h>
/**
 * *_strchr - Entry point
 * @s: char *
 * @c: char
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (*s == '\0')
	{
		return (s);
	}
	return (NULL);
}
