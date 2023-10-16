#include <string.h>
#include "main.h"
/**
 *_strcpy - Copies the string pointed to by src, including the
 *terminating null byte ('\0'), to the buffer pointed to by dest.
 *@dest: A pointer to the destination string where the content is to be copied.
 *@src: A pointer to the source string which would be copied to dest.
 *
 *This function starts by checking if the current character of src is not null.
 *If it's not null, it copies the character from src to dest, then increments
 *both pointers. It continues this process until it encounters a null character
 *in src. At that point, it adds a null character to dest and returns a pointer
 *to the destination string.
 *
 *Return: A pointer to the destination string dest.
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
