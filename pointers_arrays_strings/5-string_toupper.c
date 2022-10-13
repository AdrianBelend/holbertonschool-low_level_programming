#include "main.h"
/**
 * *string_toupper - Entry point
 * @a: char *
 * Return: 0
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		i++;
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
