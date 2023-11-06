#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - the function name
 * @d: pointer to dog
 * @name: the name to initialize
 * @age: the age to initialize
 * @owner: the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
