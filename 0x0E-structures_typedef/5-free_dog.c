#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -  a function that frees dogs.
 * @d: structur of dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
