#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
		{
			printf("fizzbuzz ");
		}
			else if ((num % 3) == 0)
			{
				printf("fizz ");
			}
			else if ((num % 5) == 0)
			{
				printf("buzz ");
			}
			else
			{
				printf("%d ", num);
			}
		}
	printf("\n");
	return (0);
}
