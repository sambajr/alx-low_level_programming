#include "main.h"
#include <string.h>
/**
 *  * rev_string - Reverses a string in-place.
 *   * @s: A pointer to a null-terminated string.
 *    *
 *     * Description:
 *      * This nctioer to a null-terminated string and reverses the
 *       * order of characters within thegth of
 ** the string, and then it swaps chaend of the
 ** string, working towards the center until the entire string is reversed.
 **
 ** @s: The string to be reversed in-place.
 *
 */
void rev_string(char *s)
{
	int len = strlen(s);

	int i;

	int tempo;

	for (i = 0 ; i < len / 2; i++)
	{
		tempo = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tempo;
	}
}
