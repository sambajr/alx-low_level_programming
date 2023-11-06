#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
/**
 *  *_strlen - Calculate the length of a string.
 *   *@s: A pointer to a null-terminated string.
 *    *
 *     *Return: The length of the string (number of characters).
 */
int _strlen(char *s)
{
		return (strlen(s));
}
/**
 *  *_strcpy - Copies the string pointed to by src, including the
 *   *terminating null byte ('\0'), to the buffer pointed to by dest.
 *@dest: A pointer to the destination string where the content is to be copied.
 *     *@src: A pointer to the source string which would be copied to dest.
 *      *
 *This function starts by checking if the current character of src is not null.
 *If it's not null, it copies the character from src to dest, then increments
 *both pointers. It continues this process until it encounters a null character
 *in src. At that point, it adds a null character to dest and returns a pointer
 *           *to the destination string.
 *            *
 *             *Return: A pointer to the destination string dest.
 */
char *_strcpy(char *dest, char *src)
{
		char *ori_dest = dest;

			while (*src != '\0')
			{
				*dest = *src;
				dest++;
				src++;
			}
			*dest = '\0';
			return (ori_dest);
}
/**
 *  *  * new_dog - Creates a new dog.
 *   *   * @name: The name of the dog.
 *    *    * @age: The age of the dog.
 *     *     * @owner: The owner of the dog.
 *Return: A pointer to the newly created dog structure, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}


