#include "main.h"
/**
 * _isupper - Entry point
 *
 * Return: 0 , 1
 * @c: int
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
