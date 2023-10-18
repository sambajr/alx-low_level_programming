#include "main.h"
#include <string.h>
/**
 *_strcat - Concatenates two strings.
 *
 *@dest: The destination string where the concatenation will occur.
 *@src: The source string that will be appended to the destination.
 *
 *Return: A pointer to the concatenated string (i.e., @dest).
 *
 *This function appends the @src string to the @dest string, overwriting
 *the null byte ('\0') at the end of @dest, and then adds a new null byte
 *to the concatenated string. The modified @dest string is returned.
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
