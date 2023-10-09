#include <stdio.h>
#include "dog.h"

/**
 * free_dog - to free the dog
 * @d: the dog to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
