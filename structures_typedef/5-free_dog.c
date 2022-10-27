#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Entry point
 * @d: dog_t
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d);
		free(d->owner);
	}
}
