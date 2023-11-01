#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - Splits a string into words based on spaces.
 * @str: The input string to be split.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	int count;
	char *token;
	char *copy;
	int i, j;
	char **words;

	if (!str || !*str)
		return (NULL);
	

	count = 0;

	copy = strdup(str);
	if (!copy)
		return (NULL);
	for (token = strtok(copy, " "); token; token = strtok(NULL, " "))
		count++;

	words = malloc((count + 1) * sizeof(char *));
	if (!words)
	{
		free(copy);
		return (NULL);
	}

	i = 0;
	for (token = strtok(str, " "); token; token = strtok(NULL, " "))
	{
		words[i] = strdup(token);
		if (!words[i])
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			free(copy);
			return (NULL);
		}
		i++;
	}
	words[count] = NULL;
	free(copy);
	return (words);
}
