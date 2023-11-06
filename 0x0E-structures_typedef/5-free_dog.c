#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: A pointer to a dog_t structure.
 *
 * Description: This function frees memory allocated for the name,
 * owner, and the dog structure itself.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
