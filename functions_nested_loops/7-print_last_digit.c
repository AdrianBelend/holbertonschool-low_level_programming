#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n: int
 * Return: 0
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar ((n % 10) + '0');
		return (n % 10);
	}
	else if (n < 0)
	{
		_putchar ((-1 * (n % 10)) + '0');
	}
		return ((-1 * n) % 10);
}
