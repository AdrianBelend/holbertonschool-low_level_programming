#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Entry point
 * @d: dog
 * @name: char *
 * @age: float
 * @owner: char *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
