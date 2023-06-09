#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer to struct to be initialize
 * @age: age to be initialized
 * @owner: owner of dog to be initialized
 * @name: name of dog to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
