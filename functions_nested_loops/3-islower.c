#include "main.h"
/**
 * _islower - Entry point
 *
 * Return: 0 , 1
 * @c: int
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
