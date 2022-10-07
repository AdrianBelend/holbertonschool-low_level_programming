#include "main.h"
/**
 * _puts - Entry level
 * @str: int *
 */

void _puts(char *str)
{
	for (; *str != '\0' ; str = str + 1)
{
		_putchar(*str);
	}
	_putchar('\n');
}
