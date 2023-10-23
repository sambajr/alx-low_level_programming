#include "main.h"
#include <string.h>
/**
 *_strstr - Locate the first occurrence of 'needle' in 'haystack'.
 *   * @haystack: The string to search in.
 *@needle: The string to search for.
 *Description: This function finds the first occurrence of the 'needle' string
 *within the 'haystack' string.
 *Return: A pointer to the first occurrence of 'needle' in 'haystack' or NULL
 *if no match is found.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
