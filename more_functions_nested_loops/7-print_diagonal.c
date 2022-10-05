#include "main.h"
/**
 * print_diagonal - Entry point
 *
 * @n: int
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	while (n > 0)
	{
		_putchar(' ');
		--n;
	}
	_putchar('\\');
	_putchar('\n');
	}
}
