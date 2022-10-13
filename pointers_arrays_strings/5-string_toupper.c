#include "main.h"
/**
 * *string_toupper - Entry point
 * Return: 0
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		i++;
		if (a[i] >= 65 && a[i] <= 90)
		{
			a[i] = a[i] + 32;
		}
	}
	return(a);
}
