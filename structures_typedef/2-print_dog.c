#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Entry point
 * @d: dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
