#include "dog.h"
#include <stdio.h>
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
		printf("Name:(nil)\n");
	}
	else
	{
		printf("Name:%s\n", d->name);
	}
	if (d->age == '\0')
	{
		printf("Age:(nil)\n");
	}
	else
	{
		printf("Age:%.1f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner:(nil)\n");
	}
	else
	{
		printf("Owner:%s\n", d->owner);
	}

}
