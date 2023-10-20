#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * cap_string - Capitalizes all words of a string
 *
 * @str: The string to be modified
 *
 * Return: The modified string
 */
char *cap_string(char *str)
{
	int i;

	int new_word = 1;

	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (strchr(separators, str[i]) != NULL)
			new_word = 1;
		else if (new_word == 1)
		{
			str[i] = toupper(str[i]);
			new_word = 0;
		}
	}
	return (str);
}

