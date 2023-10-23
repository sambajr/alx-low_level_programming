#include "main.h"
#include <string.h>
/**
 *  * _memcpy - Copy 'n' bytes from 'src' to 'dest'.
 *   * @dest: Destination memory area.
 *    * @src: Source memory area.
 *@n: Number of bytes to copy.
 *
 *Description:
 *This function copies 'n' bytes from the 'src' memory area to the 'dest'.
 *It uses the standard library function 'memcpy' for efficient memory copying.
 *Return: A pointer to the 'dest' memory area after copying.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
