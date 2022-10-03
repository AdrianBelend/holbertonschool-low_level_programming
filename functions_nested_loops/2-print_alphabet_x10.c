#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;
	char tim;
	
	for (tim ='0'; tim <= '9'; tim++)
	{

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
		_putchar('\n');
	}
	}
	return(0);
}
