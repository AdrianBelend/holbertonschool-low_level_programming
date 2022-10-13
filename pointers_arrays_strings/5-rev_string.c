#include "main.h"
/**
 * rev_string - Entry level
 * @s: char *
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	char tmp = s[0];

	for (; s[len] != '\0' ; len++)
	{
	}
	for (i = 0; i < len; i++)
	{
		len--;
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
	}
}
