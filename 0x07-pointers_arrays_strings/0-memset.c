#include "main.h"
#include <string.h>
/**
 *  * _memset - Fills a memory area with a constant byte.
 *   * @s: Pointer to the memory area to be filled.
 *    * @b: The constant byte to fill the memory with.
 *     * @n: Number of bytes to fill with the constant byte.
 *
 *Description:
 *This function fills the first 'n' bytes of the memory area pointed to by 's'
 *with the constant byte 'b'. It uses the standard library function memset for
 *the memory-filling operation.
 *Return: A pointer to the memory area 's' after it has been filled.
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
