#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - Entry point
 * @name: char *
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
