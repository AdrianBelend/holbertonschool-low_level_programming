#include "main.h"
/**
 * _abs - Entry point
 *
 * @n: int
 * Return: 0
 */
int _abs(int n)
{
	if (n >= 0)
	{
		_putchar(n - '0');
	}
	else if (n < 0)
	{
		_putchar((n * -1) - '0');
	}
	return (0);
}
