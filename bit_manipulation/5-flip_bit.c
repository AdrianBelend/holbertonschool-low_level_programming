#include "main.h"
/**
 * flip_bits - Entry point
 * @n: uli
 * @m: uli
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m, b = 0;

	while (a > 0)
	{
		b += (a & 1);
		a >>= 1;
	}

	return (b);
}
