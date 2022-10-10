#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees dog
 * @d: pointer to struct dog
 */

void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
