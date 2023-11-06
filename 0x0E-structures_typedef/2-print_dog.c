#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  * print_dog - Prints a struct dog.
 *   * @d: A pointer to a struct dog.
 *    *
 *     * Description: This function prints the attributes of a dog structure.
 *      * If any attribute is NULL, it prints "(nil)" for that attribute.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;

	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}

	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}
