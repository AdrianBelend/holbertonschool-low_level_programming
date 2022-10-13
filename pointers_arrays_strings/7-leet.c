#include "main.h"
/**
 * *leet - Entry point
 * @s: char *
 * Return: 0
 */

char *leet(char *s)
{
	int i = 0, x;
	char let[] = {65, 69, 79, 85};
	int num[] = {52, 51, 48, 55, 49};

	while (s[i])
	{
		x = 0;
		while (let[x])
		{
			if (s[i] == let[x] || s[i] == (let[x] + 32))
			{
				s[i] = num[x];
			}
			x++;
		}
		i++;
	}
	return (s);
}
