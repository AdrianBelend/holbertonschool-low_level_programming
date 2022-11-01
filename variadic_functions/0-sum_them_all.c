#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Entry point
 * @n: const unsigned int
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;

	unsigned int i, sum, par;

	const unsigned int j = 0;

	sum = 0;

	if (n == j)
		return (0);
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		par = va_arg(num, int);
		sum += par;
	}

	va_end(num);
	return (sum);
}
