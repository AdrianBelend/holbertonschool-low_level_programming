/**
* main - main function
* @argc: default int
* @argv: default array
*
* Description: prints numberz
* Return: value 0 (success)
*/
#include <stdio.h>
int main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", argc - 1);
	return (0);
}
