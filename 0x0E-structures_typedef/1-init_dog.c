#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 *  * init_dog - Initializes a dog structure.
 *   * @d: A pointer to a struct dog.
 *    * @name: The name of the dog.
 *     * @age: The age of the dog.
 *@owner: The owner of the dog.
 *
 *Description: This function initializes the members of a dog structure,
 *including dynamically allocating memory for 'name' and 'owner' strings.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
	{
		return;
	}
	if (name != NULL)
	{
		d->name = strdup(name);
	}
	else
	{
		d->name = NULL;
	}
	if (owner != NULL)
	{
		d->owner = strdup(owner);
	}
	else
	{
		d->owner = NULL;
	}
	d->age = age;
}

