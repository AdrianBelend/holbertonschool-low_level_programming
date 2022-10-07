#include "main.h"
/**
 * _strlen - Entry point
 * Return: lenght
 * @s: int *
 */

int _strlen(char *s)
{
	int a = 0;

	for (a = 0; *s != 0 ; s++)
	{		
		a++;
	}
		return (a);
}
