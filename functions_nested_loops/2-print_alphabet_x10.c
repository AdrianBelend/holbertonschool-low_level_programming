#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alp;
	char tim;
	
	for (tim ='0'; tim <= '9'; tim++)
	{

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
	}
}
