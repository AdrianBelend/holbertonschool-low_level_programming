#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n: int
 * Return: 0
 */
int print_last_digit(int n)
{
	_putchar ((n % 10) + '0');
	return (n % 10);
}
