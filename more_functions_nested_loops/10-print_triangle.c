#include "main.h"
/**
 * print_triangle - Entry point
 *
 * @size: int
 */

void print_triangle(int size)
{
	int a = 0;
	int b = 0;
	int c;

	if (size > 0)
	{
		while (b < size)
		{
			c = size - 1 - b;
			while (a < size)
			{
				if (c > a)
				{
				_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				a++;
			}
			b++;
			a = 0;
			_putchar('\n');
		}
	}
		else
		{
			_putchar('\n');
		}
}
