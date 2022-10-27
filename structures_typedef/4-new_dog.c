#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Entry point
 * @name: char *
 * @age: float
 * @owner: char*
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *p;

	p = malloc(sizeof(struct dog));

	if (p == NULL)
	{
	}
	else
	{
		p->age = age;
		p->name = name;
		p->owner = owner;
	}
	return (p);
}
