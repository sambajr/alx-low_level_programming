#include <string.h>
#include "main.h"
/**
 *_strncpy - Copies at most 'n' characters from 'src' to 'dest'.
 *
 *@dest: The destination buffer where the copied string will be stored.
 *@src: The source string to be copied.
 *@n: The maximum number of characters to be copied from 'src'.
 *
 *Return: A pointer to the resulting 'dest' buffer.
 *
 *This function copies at most 'n' characters from 'src' to 'dest'.
 *If 'src' is less than 'n' characters long, the remaining characters in 'dest'
 *will be filled with null bytes ('\0') to a total of 'n' characters.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = strncpy(dest, src, n);

	return (ptr);
}
