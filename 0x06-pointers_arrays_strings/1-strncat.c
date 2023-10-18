#include <string.h>
#include "main.h"
/**
 *_strncat - Concatenates two strings using at most 'n' bytes from 'src'.
 *
 *@dest: The destination string where the concatenation will occur.
 *@src: The source string to be appended to the destination.
 *@n: The maximum number of bytes to be appended from 'src'.
 *
 *Return: A pointer to the resulting string 'dest'.
 *
 *This function appends at most 'n' characters from 'src' to the 'dest' string,
 *overwriting the null byte ('\0') at the ends add a new null byte.
 *The modified 'dest' string is returned.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = strncat(dest, src, n);

	return (ptr);
}


