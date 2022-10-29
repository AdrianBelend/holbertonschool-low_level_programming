#include <stdio.h>
/**
 * print_name - Entry point
 * @name: char *
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
