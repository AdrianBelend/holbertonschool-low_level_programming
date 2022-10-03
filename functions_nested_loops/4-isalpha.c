#include "main.h"
/**
 * _isalpha - Entry point
 *
 * Return: 0 , 1
 * @c: int
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
